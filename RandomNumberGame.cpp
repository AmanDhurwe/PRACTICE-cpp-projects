#include<iostream>
#include<cstdlib>
#include <random>

void GameStart();
void GameEnd();
int Gameloop(int RANDnum );


int main(){
   
    GameStart();
   

    return 0;
}

void GameStart(){

    std::cout << "\n\t\t=======WELCOME====== " << "\n\n This is a Number Guessing Game . . ." << "\n Try to guess number between(1-100) . . ." 
                                                             << "\n GOOD LUCK . . " << std::endl;

    std::random_device rd ;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(1,100);


    int RandamNumber;
    RandamNumber = distribution(gen);
    int result,attempt(0);

    std::cout << " Rnum : " << RandamNumber << std::endl;
    std::cout << std::endl;

   do
    {
      result = Gameloop(RandamNumber);
      attempt++;
    
    } while (result != 0);

    std::cout << "Attempt : " << attempt << std::endl;
    std::cout << std::endl;
    GameEnd();
};

int Gameloop(int RANDnum ){
   
    int iNumber ;
    int result;

    std::cout << " Guess the number : " ;
    std::cin >> iNumber;

    if (RANDnum == iNumber)
    {
         system ("cls");
        std ::cout << "Congrats , you won " << std::endl;
        result = 0 ;
    }else if (RANDnum < iNumber)
    {
        std::cout << "its high , try again" << std::endl;
        result = 1;
    }else if (RANDnum > iNumber)
    {
        std::cout << "its low , try again" << std::endl;
        result = 1;
    }

  return result;
};

void GameEnd(){
    int choice;

    std::cout <<"1. Restart " << "\n2. Exit" << std::endl;
    std::cin >> choice;

   if (choice == 1 )
    {
        system ("cls");
        GameStart();
    }else if (choice == 2)
    {
        system ("cls");
        system ("exit");
    }
    
    
}
