    #include <iostream>
    using namespace std;

    int main()
    {
        int base, power;
        cin >> base >> power;
        
        if(power>0){
            int result = 1;

            for (int i = 1; i <= power; i++)
            {
                result = result * base;
            }

            cout << result;
        }
        else{
            float result = 1;
            power = -power;
            for (int i = 1; i <= power; i++)
            {
                result = result * base;
            }

            cout << float(1/result);
        }
        return 0;
    }
