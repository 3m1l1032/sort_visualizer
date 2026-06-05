/* 
 * Emilio Cazares Borbon, June 2026
 * 
 * Testing for insertion sort algorithm
 * 
 */

#include "../include/insertion_sort.hpp"
#include "../include/main.hpp"

constexpr int MAX_STEPS = 1000000000000;

int main ()
{
    int passed = 0;
    int failed = 0;

    try
    {
        cout << "Testing constructor (int):        ";
        try
        {
            InsertionSort<int> constructorInt;

            cout << "PASSED - " << constructorInt.operations << endl;
            passed++;
        }
        catch (const std::exception& e)
        {
            cout << "FAILED" << endl;
            failed++;
        }
        catch (...)
        {
            cout << "FAILED" << endl;
            failed++;
        }

        cout << "Testing constructor (string):     ";
        try
        {
            InsertionSort<std::string> constructorString;

            cout << "PASSED - " << constructorString.operations << endl;
            passed++;
        }
        catch (const std::exception& e)
        {
            cout << "FAILED" << endl;
            failed++;
        }
        catch (...)
        {
            cout << "FAILED" << endl;
            failed++;
        }

        cout << "Testing insertion (int):          ";
        try
        {
            InsertionSort<int> insertInt;

            insertInt.data.push_back (0);
            insertInt.data.push_back (1);
            insertInt.data.push_back (2);
            insertInt.data.push_back (3);
            
            if (insertInt.data[0] != 0)
                throw "failed";
            if (insertInt.data[1] != 1)
                throw "failed";
            if (insertInt.data[2] != 2)
                throw "failed";
            if (insertInt.data[3] != 3)
                throw "failed";

            cout << "PASSED - " << insertInt.operations << endl;
            passed++;
        }
        catch (const std::exception& e)
        {
            cout << "FAILED" << endl;
            failed++;
        }
        catch (...)
        {
            cout << "FAILED" << endl;
            failed++;
        }

        cout << "Testing sorting (int; 0 items):   ";
        try
        {
            InsertionSort<int> sortZeroInt;

            sortZeroInt.sortForward (MAX_STEPS);

            cout << "PASSED - " << sortZeroInt.operations << endl;
            passed++;
        }
        catch (const std::exception& e)
        {
            cout << "FAILED" << endl;
            failed++;
        }
        catch (...)
        {
            cout << "FAILED" << endl;
            failed++;
        }

        cout << "Testing sorting (int; 1 item):    ";
        try
        {
            InsertionSort<int> sortOneInt;

            sortOneInt.data.push_back (3);

            sortOneInt.sortForward (MAX_STEPS);

            if (sortOneInt.data[0] != 3)
                throw "failed";

            cout << "PASSED - " << sortOneInt.operations << endl;
            passed++;
        }
        catch (const std::exception& e)
        {
            cout << "FAILED" << endl;
            failed++;
        }
        catch (...)
        {
            cout << "FAILED" << endl;
            failed++;
        }

        cout << "Testing sorting (int; 10 items):  ";
        try
        {
            InsertionSort<int> sortTenInt;

            sortTenInt.data.push_back (50);
            sortTenInt.data.push_back (30);
            sortTenInt.data.push_back (7);
            sortTenInt.data.push_back (57);
            sortTenInt.data.push_back (50);
            sortTenInt.data.push_back (80);
            sortTenInt.data.push_back (100);
            sortTenInt.data.push_back (28);
            sortTenInt.data.push_back (1);
            sortTenInt.data.push_back (3);

            sortTenInt.sortForward (MAX_STEPS);

            if (sortTenInt.data[0] != 1)
                throw "failed";
            if (sortTenInt.data[1] != 3)
                throw "failed";
            if (sortTenInt.data[2] != 7)
                throw "failed";
            if (sortTenInt.data[3] != 28)
                throw "failed";
            if (sortTenInt.data[4] != 30)
                throw "failed";
            if (sortTenInt.data[5] != 50)
                throw "failed";
            if (sortTenInt.data[6] != 50)
                throw "failed";
            if (sortTenInt.data[7] != 57)
                throw "failed";
            if (sortTenInt.data[8] != 80)
                throw "failed";
            if (sortTenInt.data[9] != 100)
                throw "failed";

            cout << "PASSED - " << sortTenInt.operations << endl;
            passed++;
        }
        catch (const std::exception& e)
        {
            cout << "FAILED" << endl;
            failed++;
        }
        catch (...)
        {
            cout << "FAILED" << endl;
            failed++;
        }

        cout << "Testing sorting (int; 1 step):    ";
        try
        {
            InsertionSort<int> sortOneStep;

            sortOneStep.data.push_back (50);
            sortOneStep.data.push_back (30);
            sortOneStep.data.push_back (7);
            sortOneStep.data.push_back (57);
            sortOneStep.data.push_back (50);
            sortOneStep.data.push_back (80);
            sortOneStep.data.push_back (100);
            sortOneStep.data.push_back (28);
            sortOneStep.data.push_back (1);
            sortOneStep.data.push_back (3);

            sortOneStep.sortForward (1);

            if (sortOneStep.data[0] != 30)
                throw "failed";
            if (sortOneStep.data[1] != 50)
                throw "failed";
            if (sortOneStep.data[2] != 7)
                throw "failed";
            if (sortOneStep.data[3] != 57)
                throw "failed";
            if (sortOneStep.data[4] != 50)
                throw "failed";
            if (sortOneStep.data[5] != 80)
                throw "failed";
            if (sortOneStep.data[6] != 100)
                throw "failed";
            if (sortOneStep.data[7] != 28)
                throw "failed";
            if (sortOneStep.data[8] != 1)
                throw "failed";
            if (sortOneStep.data[9] != 3)
                throw "failed";

            cout << "PASSED - " << sortOneStep.operations << endl;
            passed++;
        }
        catch (const std::exception& e)
        {
            cout << "FAILED" << endl;
            failed++;
        }
        catch (...)
        {
            cout << "FAILED" << endl;
            failed++;
        }

        cout << "Testing sorting (int; 2 steps):   ";
        try
        {
            InsertionSort<int> sortTwoStep;

            sortTwoStep.data.push_back (50);
            sortTwoStep.data.push_back (30);
            sortTwoStep.data.push_back (7);
            sortTwoStep.data.push_back (57);
            sortTwoStep.data.push_back (50);
            sortTwoStep.data.push_back (80);
            sortTwoStep.data.push_back (100);
            sortTwoStep.data.push_back (28);
            sortTwoStep.data.push_back (1);
            sortTwoStep.data.push_back (3);

            sortTwoStep.sortForward (2);

            if (sortTwoStep.data[0] != 7)
                throw "failed";
            if (sortTwoStep.data[1] != 30)
                throw "failed";
            if (sortTwoStep.data[2] != 50)
                throw "failed";
            if (sortTwoStep.data[3] != 57)
                throw "failed";
            if (sortTwoStep.data[4] != 50)
                throw "failed";
            if (sortTwoStep.data[5] != 80)
                throw "failed";
            if (sortTwoStep.data[6] != 100)
                throw "failed";
            if (sortTwoStep.data[7] != 28)
                throw "failed";
            if (sortTwoStep.data[8] != 1)
                throw "failed";
            if (sortTwoStep.data[9] != 3)
                throw "failed";

            cout << "PASSED - " << sortTwoStep.operations << endl;
            passed++;
        }
        catch (const std::exception& e)
        {
            cout << "FAILED" << endl;
            failed++;
        }
        catch (...)
        {
            cout << "FAILED" << endl;
            failed++;
        }

        cout << "Testing sorting (int; by steps):  ";
        try
        {
            InsertionSort<int> sortByStep;

            sortByStep.data.push_back (50);
            sortByStep.data.push_back (30);
            sortByStep.data.push_back (7);
            sortByStep.data.push_back (57);
            sortByStep.data.push_back (50);
            sortByStep.data.push_back (80);
            sortByStep.data.push_back (100);
            sortByStep.data.push_back (28);
            sortByStep.data.push_back (1);
            sortByStep.data.push_back (3);

            vector<vector<int>> valueCheck = {
                                                {30, 50, 7, 57, 50, 80, 100, 28, 1, 3},
                                                {7, 30, 50, 57, 50, 80, 100, 28, 1, 3},
                                                {7, 30, 50, 57, 50, 80, 100, 28, 1, 3},
                                                {7, 30, 50, 50, 57, 80, 100, 28, 1, 3},
                                                {7, 30, 50, 50, 57, 80, 100, 28, 1, 3},
                                                {7, 30, 50, 50, 57 ,80, 100, 28, 1, 3},
                                                {7, 28, 30, 50, 50 ,57, 80, 100, 1, 3},
                                                {1, 7, 28, 30, 50, 50, 57, 80, 100, 3},
                                                {1, 3, 7, 28, 30, 50, 50, 57, 80, 100},
                                             };

            for (size_t i = 0; i < sortByStep.data.size () - 1; i++)
            {
                sortByStep.sortForward (1);

                if (sortByStep.data[0] != valueCheck[i][0])
                    throw "failed";
                if (sortByStep.data[1] != valueCheck[i][1])
                    throw "failed";
                if (sortByStep.data[2] != valueCheck[i][2])
                    throw "failed";
                if (sortByStep.data[3] != valueCheck[i][3])
                    throw "failed";
                if (sortByStep.data[4] != valueCheck[i][4])
                    throw "failed";
                if (sortByStep.data[5] != valueCheck[i][5])
                    throw "failed";
                if (sortByStep.data[6] != valueCheck[i][6])
                    throw "failed";
                if (sortByStep.data[7] != valueCheck[i][7])
                    throw "failed";
                if (sortByStep.data[8] != valueCheck[i][8])
                    throw "failed";
                if (sortByStep.data[9] != valueCheck[i][9])
                    throw "failed";
            }

            cout << "PASSED - " << sortByStep.operations << endl;
            passed++;
        }
        catch (const std::exception& e)
        {
            cout << "FAILED" << endl;
            failed++;
        }
        catch (...)
        {
            cout << "FAILED" << endl;
            failed++;
        }

        cout << "****************************************" << endl;
        cout << "    Tests passed:  " << passed << endl;
        cout << "    Tests failed:  " << failed << endl;

        double denom = passed + failed;
        double perc = passed / denom;
        cout << "    Success:     " << (100 * perc) << "%" << endl;
    }
    catch (const std::exception& e)
    {
        cerr << e.what() << endl;
    }
    catch (...)
    {
        cerr << "FATAL ERROR!!!" << endl;
    }
    
    return EXIT_SUCCESS;
}