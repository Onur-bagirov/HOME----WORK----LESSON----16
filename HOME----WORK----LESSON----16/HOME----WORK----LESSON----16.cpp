#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    cout << "==================================================================";
    cout << "\n\n";
    cout << "Tap - 1";
    cout << "\n\n\n\n";

    int min_num_one = 0;
    int max_num_one = 20;
    int array_one[5][5] = {};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array_one[i][j] = rand() % (max_num_one - min_num_one + 1) + min_num_one;
            cout << array_one[i][j] << ",";
        }
        cout << endl;
    }
    
    int total_one = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            total_one += array_one[i][j];
        }
    }

    cout << "\n\n";

    cout << "Total : " << total_one;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "==================================================================";
    cout << "\n\n";
    cout << "Tap - 2";
    cout << "\n\n\n\n";

    int min_num_two = 0;
    int max_num_two = 20;
    int array_two[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array_two[i][j] = rand() % (max_num_two - min_num_one + 1) + min_num_two;
            cout << array_two[i][j] << ",";
        }
        cout << endl;
    }

    int main_dioqonal = 0;
    int two_dioqonal = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                main_dioqonal += array_two[i][j];
            }
            if (i + j == 5 - 1)
            {
                two_dioqonal += array_two[i][j];
            }
        }
    }

    cout << "\n\n";

    cout << "Main dioqonal : " << main_dioqonal << "\n";
    cout << "Two dioqonal : " << two_dioqonal << "\n";

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "==================================================================";
    cout << "\n\n";
    cout << "Tap - 3";
    cout << "\n\n\n\n";

    int min_num_three = -100;
    int max_num_three = 100;
    int array_three[5][5] = {};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array_three[i][j] = rand() % (max_num_three - min_num_three + 1) + min_num_three;
            cout << array_three[i][j] << ",";
        }
        cout << endl;
    }

    int min_num = 0;
    int max_num = 0;

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (array_three[i][j] < min_num)
            {
                min_num = array_three[i][j];
            }
            if (array_three[i][j] > max_num)
            {
                max_num= array_three[i][j];
            }
        }
    }

    cout << "\n\n";

    cout << "Min number : " << min_num << "\n";
    cout << "Max number : " << max_num << "\n";

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "==================================================================";
    cout << "\n\n";
    cout << "Tap - 4";
    cout << "\n\n\n\n";

    int min_num_four = -5;
    int max_num_four = 5;
    int array_four[5][5] = {};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array_four[i][j] = rand() % (max_num_four - min_num_four + 1) + min_num_four;
            cout << array_four[i][j] << ",";
        }
        cout << endl;
    }

    cout << "\n\n";

    for (int i = 0; i < 5; i++)
    {
        int zero_num = 0;
        int menfi_num = 0;
        int musbet_num = 0;

        for (int j = 0; j < 5; j++)
        {
            if (array_four[i][j] == 0)
            {
                zero_num += 1;
            }
            if (array_four[i][j] < 0)
            {
                menfi_num += 1;
            }
            if (array_four[i][j] > 0)
            {
                musbet_num += 1;
            }
        }

        cout << "Zero num : " << zero_num << "\n";
        cout << "Positive num : " << menfi_num << "\n";
        cout << "Negative num : " << musbet_num << "\n";
        cout << "\n\n";
    }

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "==================================================================";
    cout << "\n\n";
    cout << "Tap - 5";
    cout << "\n\n\n\n";

    int min_num_five = 0;
    int max_num_five = 20;
    int array_five[5][5] = {};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array_five[i][j] = rand() % (max_num_five - min_num_five + 1) + min_num_five;
            cout << array_five[i][j] << ",";
        }
        cout << endl;
    }

    cout << "\n\n";

    for (int i = 0; i < 5; i++)
    {
        int total_five = 0;

        for (int j = 0; j < 5; j++)
        {
            total_five += array_five[i][j];
        }
        cout << "Total :  " << total_five;
        cout << "\n\n";
    }

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "==================================================================";
    cout << "\n\n";
    cout << "Tap - 6";
    cout << "\n\n\n\n";

    int min_num_six = 0;
    int max_num_six = 20;
    int array_six[5][5] = {};

    srand(time(0));


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            array_six[i][j] = rand() % (max_num_six - min_num_six + 1) + min_num_six;
            cout << array_six[i][j] << ",";
        }
        cout << endl;
    }

    cout << "\n\n";

    for (int j = 0; j < 5; ++j) 
    {
        int total_six = 0;

        for (int i = 0; i < 5; i++) 
        {  
            total_six += array_six[i][j];
        }

        cout <<  " Total : " << total_six;
        cout << "\n\n";
    }

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "==================================================================";
    cout << "\n\n";
    cout << "Tap - 7";
    cout << "\n\n\n\n";

    int min_num_seven = -10;
    int max_num_seven = 40;
    int array_seven[5][5] = {};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array_seven[i][j] = rand() % (max_num_seven - min_num_six + 1) + min_num_seven;
            cout << array_seven[i][j] << ",";
        }
        cout << endl;
    }

    cout << "\n\n";


    for (int i = 0; i < 5; i++)
    {
        bool check = true;
        int total_seven = 0;

        for (int j = 0; j < 5; j++)
        {
            if (array_seven[i][j] < 0)
            {
                check = false;
                break;
            }
            total_seven += array_seven[i][j];
        }
        if (check)
        {
            cout << "Total : " << total_seven;
            cout << "\n\n";
        }
    }

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "==================================================================";
    cout << "\n\n";
    cout << "Tap - 8";
    cout << "\n\n\n\n";


    int array_eight[3][5] = {};


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            array_eight[i][j] = (i + 1) * 10 + (j + 1);
            cout << array_eight[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "==================================================================";
    cout << "\n\n";
    cout << "Tap - 10";
    cout << "\n\n\n\n";

    int min_num_ten = 0;
    int max_num_ten = 20;
    int array_ten[6][6] = {};

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            array_ten[i][j] = rand() % (max_num_ten - min_num_ten + 1) + min_num_ten;
            cout << array_ten[i][j] << ",";
        }
        cout << endl;
    }

    cout << "\n\n";

    for (int i = 0; i < 5; i += 2) {
        for (int j = 0; j < 6; j++) {
            int num = array_ten[i][j];
            array_ten[i][j] = array_ten[i + 1][j];
            array_ten[i + 1][j] = num;
        }
    }

    cout << "\tAnswer : \n\n";

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << array_ten[i][j] << ",";
        }
        cout << endl;
    }

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "==================================================================";
}