#include<bits/stdc++.h>
using namespace std;
class guess;

class random {
    private:
    int r;
    public:
    random() {
        srand (time(NULL));
        r = 1 + (rand()%1000);

    }

    friend class guess;
    

    };

    class guess {
        private:
        int input;
        int k;
        random j;
        public:
        guess() {
            input = 0;
            k = 0;
            
        }
        void guessing() {
        do {
            cout<<"Guess the number!!!"<<endl;
            cin >> input;
            k++;
            if(input<j.r)
            cout<<endl <<"Too low try again!!"<<endl;
            else if(input>j.r)
            cout<<"Too high try again!!"<<endl;
            else
            cout<<"Excellent you guessed the number would you like to play again!!"<<endl;
        }
        while(input!=j.r); 
        if(k<10)
        cout<<"Either you know the secret or you got lucky!!"<<endl;
        else if(k==10)
        cout<<"haha you know the secret!!"<<endl;
        else {
            try_again();
             
        }



        
        }
        void try_again() {
            int count = 0;
            to:
        
            cout<<"you should be able to do better why should it take no more than 10 guesses!!"<<endl;
            cout << "Enter Y/N "<<endl;
            char choice;
            cin >> choice;
            if(choice == 'Y' || choice == 'y') {
                k = 0;
                guessing();
            }
            else if(choice == 'N' || choice == 'n') {
                cout << "Tumse na ho paayega!!!"<<endl;
                exit(0);
            }
            else {
                cout <<"You entered a wrong input"<<endl;
                count++;
                if(count>3) {
                    cout<<"Lodu h kya be xD..."<<endl;
                    exit(0);
                }
                goto to;
            }

        }
        ~guess() {
            cout << "Game is Over"<<endl;
        }

    };



int main() {
    // random guess;
    guess number;
    number.guessing();
    

    return 0;
}