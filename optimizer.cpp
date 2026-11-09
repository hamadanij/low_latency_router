#include <iostream>

struct DataPack {
    double input_A;    //64-bit input data as a decimal value
    double input_B;
};

struct ExecutionCore {
    void process_signals(const DataPack& data) {
        if (data.input_A < data.input_B) {          //circuit gate to compare price
            std::cout << "TRIGGER\n";
        }
    }
};

int main() {
    DataPack feed;
    ExecutionCore core;

    feed.input_A = 100.00;      //Sends an electrical current down the system bus lines to trap the binary charges (1s and 0s)
    feed.input_B = 105.00;

    core.process_signals(feed);

    return 0;      //successful completion!
}
