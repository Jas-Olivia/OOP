#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

typedef vector<int> Records;

class RecordsManager {
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}

    // Updated read function with exception handling
    void read(Records &records) {
        _file.open(_filename, ios::in);

        if (_file.is_open()) {
            string line;
            try {
                while (getline(_file, line)) {
                    try {
                        int value = stoi(line);  // might throw
                        records.push_back(value);
                    } catch (const invalid_argument&) {
                        cout << "invalid_argument error" << endl;
                        throw;
                    } catch (const out_of_range&) {
                        cout << "out_of_range error" << endl;
                        throw;
                    }
                }
            } catch (...) {
                _file.close();  // ensure file is closed on exception
                throw;          // rethrow to main()
            }

            _file.close();  // normal close if no exception
        } else {
            throw runtime_error("Failed to open file");
        }
    }
};

int main(int argc, char* argv[]) {
    Records myRecords;
    string filename = "records.txt";

    if (argc > 1) filename = argv[1];

    RecordsManager recordM(filename);

    try {
        recordM.read(myRecords);

        int sum = 0;
        for (int value : myRecords) {
            sum += value;
        }
        cout << sum << endl;

    } catch (const exception& e) {
        cerr << "Exception occurred in main: " << e.what() << endl;
        return 1;
    }

    return 0;
}
