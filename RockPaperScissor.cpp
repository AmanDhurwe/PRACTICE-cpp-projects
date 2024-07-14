#include <iostream>
#include <random>

int RandNumber();
char Ai();
void checkwin(char ai,char pl);

int main(){

    int choice(0)   ;
    char playermove(' ');
    char aimove(' ');
    bool exit = false ;


    while (!exit)
    {
        std::cout<< "\t\t\t\t Welcome "
                 << "\n Rock Paper Scissor Game " << std::endl;

        std::cout << "\n\n\n Enter your choice :-" 
                  << "rock = 1 \n paper = 2 \n scissor = 3 \n ->" ;
        
        std::cin >> choice;

        if (choice == 1)
        {
            playermove = 'r';
        }else if (choice == 2)
        {
            playermove = 'p';
        }else if (choice == 3)
        {
            playermove = 's';
        }
        aimove = Ai();
        checkwin(aimove,playermove);
        
        while (!exit)
        {
        std::cout << "\n\nthank you \n1. play again \n2.exit\n->";
        std::cin >> choice ;
        if (choice == 1 )
        {
            break;
        }else if (choice == 2 )
        {
            exit = true;
        }else 
        {
            std::cout << "\n invalid Input "  << std::endl;
        }
        
        }
        
        
    
    }


    return 0;
}


int RandNumber(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distributor(1,3);
    int num = distributor(gen);
    return num;
};
char Ai(){
    int num = RandNumber();
    char rps;
        if (num == 1)
        {
            rps= 'r';
        }else if (num == 2)
        {
            rps= 'p';
        }else if (num == 3)
        {
            rps='s';
        }
    return rps;
}

void checkwin(char ai, char pl){
    if (ai == pl)
    {
        std::cout << "\n\nits a draw " << std::endl;
    }
    if (ai == 'p' && pl == 'r')
    {
        std::cout << " \n\nai wins : paper vs rock " <<std::endl;
    }
    if (ai == 'p' && pl == 's')
    {
        std::cout << " \n\nyou wins : paper vs rock " <<std::endl;
    }   
    if (ai == 'r' && pl == 'p')
    {
        std::cout << " \n\nyou wins : rock vs paper " <<std::endl;
    } 
    if (ai == 'r' && pl == 's')
    {
        std::cout << " \n\nai wins : rock vs scissor " <<std::endl;
    }
    if (ai == 's' && pl == 'p')
    {
        std::cout << " \n\nai wins : scissor vs papper " <<std::endl;
    }
    if (ai == 's' && pl == 'r')
    {
        std::cout << " \n\nyou wins : scissor vs rock " <<std::endl;
    }   
};
