/* 02 september 2023 
  i got some feedback from discord and then i recreated this game 
  and now it works fine , HEHE

  its not perfect , this is my best for what i know now . 
*/

#include <iostream>
#include <random>


int main(){
  int RandomNumber , UserInput , Result , choice, Attempt (1);
  std::cout << "\n\n\t\t=====WELCOME=====" << "\nguess number b/t 1-100" << std::endl;


do
{

// generating random no.

  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<int> distribution(1,100);
  RandomNumber = distribution(gen);


// gameloop

  do
  {
   std::cout << "\nEnter your guess -> " ;
   std::cin >> UserInput ;
   if (RandomNumber == UserInput)
   {
    std::cout << "congrats you won "<<"\nattempts : " << Attempt<< std::endl;
    Result = 0;
   }else if (RandomNumber > UserInput)
   {
    std::cout << "its low , try again  " << std::endl;
    Result = 1;
   }else if (RandomNumber < UserInput)
   {
    std::cout << "its high , try again  " << std::endl;
    Result = 1;
   }else{
    std::cout << "error , try again  " << std::endl;
    Result = 1;
   };
   
   Attempt++;
     
  } while (Result != 0);
  Attempt = 0;


// restart and Ending menu

  std::cout << "\n\n1. RESTART " << "\n2. EXIT " << std::endl;
  std::cin >> choice ; 

} while (choice == 1);



  return 0;
}