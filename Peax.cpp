#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
int main ()
{
    while (true) 
    {
      std::system("clear");
        std::cout << " " << "\n";
        std::cout << R"(
 ____           __  __   ___  ____  
|  _ \ ___  __ _\ \/ /  / _ \/ ___| 
| |_) / _ \/ _` |\  /  | | | \___ \ 
|  __/  __/ (_| |/  \  | |_| |___) |
|_|   \___|\__,_/_/\_\  \___/|____/ 
        )" << "\n";
        std::cout << " " << "\n";
        std::cout << " " << "\n";
        std::cout << "====================================================================" << "\n";
        int choice;
        std::cout << " " << "\n";
        std::cout << "1.Age Calculator" << "\n";
        std::cout << "2.Number Calculator" << "\n";
        std::cout << "3.ASCII Calculator" << "\n";
        std::cout << "4.Charcter Encrypter" << "\n";
        std::cout << "5.Guess the Distro Game" << "\n";
        std::cout << "6.Exit" << "\n";
        std::cout << " " << "\n";
        std::cout << "==============================================" << "\n";
        std::cout << " " << "\n";
        std::cout << "Choose a Program: ";
        std::cin >> choice;

        if (std::cin.fail()) 
        {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue; 
        }
       
        std::cout << " " << "\n";
        std::cout << "==============================================" << "\n";
        std::cout << " " << "\n";
        
        switch (choice)
        {
        case 1:
        {
            std::system("clear");
            std::cout << " " << "\n";
            std::cout << R"(
    _                 ____      _            _       _             
   / \   __ _  ___   / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ 
  / _ \ / _` |/ _ \ | |   / _` | |/ __| | | | |/ _` | __/ _ \| '__|
 / ___ \ (_| |  __/ | |__| (_| | | (__| |_| | | (_| | || (_) | |   
/_/   \_\__, |\___|  \____\__,_|_|\___|\__,_|_|\__,_|\__\___/|_|   
        |___/                                                      
        
            )" << "\n";
            std::cout << " " << "\n";
            long long age;
            std::cout << "Enter Your age in years: ";
            std::cin >> age;
            std::cout << " " << "\n";
            std::string choose;
            std::cout << "Choose: (Age in: months/days/hours/seconds): ";
            std::cin >> choose;
            std::cout << " " << "\n";

            if (choose == "Months" || choose == "MONTHS" || choose == "months" || choose == "Month" || choose == "MONTH" || choose == "month")
            {
                std::cout << "Your age in months is: " << age * 12 << " months" << "\n";
            }
            else if (choose=="Days" || choose=="DAYS" || choose=="days" || choose=="Day" || choose=="DAY" || choose=="day")
            {
                std::cout << "Your age in days is: " << age * 365 << " days" << "\n";
            }  
            else if (choose=="Hours" || choose=="HOURS" || choose=="hours" || choose=="Hour" || choose=="HOUR" || choose=="hour")
            {
                std::cout << "Your age in hours is: " << age * 365 * 24 << " hours" << "\n";
            }
            else if (choose=="Minutes" || choose=="MINUTES" || choose=="minutes" || choose=="Minute" || choose=="MINUTE" || choose=="minute")
            {
                std::cout << "Your age in minutes is: " << age * 365 * 24 * 60 << " minutes" << "\n";
            }  
            else if (choose=="Seconds" || choose=="SECONDS" || choose=="seconds" || choose=="Second" || choose=="SECOND" || choose=="second")
            {
                std::cout << "Your age in seconds is: " << age * 365 * 24 * 60 * 60 << " seconds" << "\n";
            }
            else 
            {
                std::cout << "Invalid Choice !" << "\n";
            }
            std::cout << " " << "\n";
            std::cout << "===================================== " << "\n";
            std::cout << " " << "\n";
            break;
        }
        
        case 2:
        {
            std::system("clear");
            std::cout << " " << "\n";
            std::cout << R"(
 _   _                 _                       
| \ | |_   _ _ __ ___ | |__   ___ _ __         
|  \| | | | | '_ ` _ \| '_ \ / _ \ '__|        
| |\  | |_| | | | | | | |_) |  __/ |           
|_|_\_|\__,_|_| |_| |_|_.__/ \___|_|           
 / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ 
| |   / _` | |/ __| | | | |/ _` | __/ _ \| '__|
| |__| (_| | | (__| |_| | | (_| | || (_) | |   
 \____\__,_|_|\___|\__,_|_|\__,_|\__\___/|_|   
            )" << "\n";
            std::cout << " " << "\n";
            long n1;
            std::cout << "Enter First number: ";
            std::cin >> n1;
            std::string oper;
            std::cout << "Choose: (+,-,x,/,%,^): ";
            std::cin >> oper;
            long n2;
            std::cout << "Enter Second number: ";
            std::cin >> n2;
            std::cout << " " << "\n";

            if (oper == "+")
            {
                std::cout << n1 << " + " << n2 << " = " << n1 + n2 << "\n";
            }
            else if (oper == "-")
            {
                std::cout << n1 << " - " << n2 << " = " << n1 - n2 << "\n";
            }
            else if (oper == "x")
            {
                std::cout << n1 << " x " << n2 << " = " << n1 * n2 << "\n";
            }
            else if (oper == "/")
            {
                if (n2 == 0)
                {
                    std::cout << "Can't divide by zero !" << "\n";
                }
                else 
                {
                    std::cout << n1 << " ÷ " << n2 << " = " << (float)n1 / (float)n2 << "\n";
                }
            }
            else if (oper == "%")
            {
                std::cout << n1 << " % " << n2 << " = " << n1 % n2 << "\n";
            }
            else if (oper == "^")
            {
                std::cout << n1 << " ^ " << n2 << " = " << std::pow(n1, n2) << "\n";
            }
            else
            {
                std::cout << "Invalid Choice !" << "\n";
            }
            std::cout << " " << "\n";
            std::cout << "==============================" << "\n";
            std::cout << " " << "\n";
            break;
        }

        case 3:
        {
            std::system("clear");
            std::cout << " " << "\n";
            std::cout << R"(
    _    ____        ___ ___     ___                   _       _
   / \  / ___| / ___|_ _|_ _|  / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ 
  / _ \ \___ \| |    | | | |  | |   / _` | |/ __| | | | |/ _` | __/ _ \| '__|
 / ___ \ ___) | |___ | | | |  | |__| (_| | | (__| |_| | | (_| | || (_) | |   
/_/   \_\____/ \____|___|___|  \____\__,_|_|\___|\__,_|_|\__,_|\__\___/|_|   
            )" << "\n";  
            std::cout << " " << "\n";
            std::string ch;
            std::cout << " Do you want to Calculate Character or ASCII: (char/ASCII): ";
            std::cin >> ch;
            if (ch == "char" || ch == "Char" || ch == " CHAR")
            {
                int chr;
                std::cout << "Enter ASCII: ";
                std::cin >> chr;
                std::cout << " " << "\n";
                std::cout << "Your Character is: " << (char)chr << "\n";
                std::cout << " " << "\n";
                std::cout << "=========================" << "\n";
                std::cout << " " << "\n";
            }
            else if (ch == "ASCII" || ch == "ascii")
            {
                char asc;
                std::cout << "Enter Character: ";
                std::cin >> asc;
                std::cout << " " << "\n";
                std::cout << "Your ASCII is: " << (int)asc << "\n";
                std::cout << " " << "\n";
                std::cout << "===========================" << "\n";
                std::cout << " " << "\n";
            }       
            break; 
        }

        case 4:
        {
            std::system("clear");
            std::cout << " " << "\n";
            std::cout << R"(
  ____ _                          _             
 / ___| |__   __ _ _ __ __ _  ___| |_ ___ _ __  
| |   | '_ \ / _` | '__/ _` |/ __| __/ _ \ '__| 
| |___| | | | (_| | | | (_| | (__| ||  __/ |    
 \____|_| |_|\__,_|_|  \__,_|\___|\__\___|_|    
| ____|_ __   ___ _ __ _   _ _ __ | |_ ___ _ __ 
|  _| | '_ \ / __| '__| | | | '_ \| __/ _ \ '__|
| |___| | | | (__| |  | |_| | |_) | ||  __/ |   
|_____|_| |_|\___|_|   \__, | .__/ \__\___|_|   
                       |___/|_|                 )" << "\n";
            char ch;
            std::cout << " " << "\n";
            std::cout << "Enter Character: ";
            std::cin >> ch;
            int nch = ch + 1;
            std::cout << " " << "\n";
            std::cout << "Your Encrypted ASCII is: " << nch << "\n";
            std::cout << " " << "\n";
            std::cout << "===============================" << "\n";
            std::cout << " " << "\n";
            break;
        }
        case 5:
        { 
        std::system("clear");
        std::cout << R"(
  ____                       _   _           
 / ___|_   _  ___  ___ ___  | |_| |__   ___  
| |  _| | | |/ _ \/ __/ __| | __| '_ \ / _ \ 
| |_| | |_| |  __/\__ \__ \ | |_| | | |  __/ 
 \____|\__,_|\___||___/___/  \__|_| |_|\___| 
|  _ \(_)___| |_ _ __ ___                    
| | | | / __| __| '__/ _ \                   
| |_| | \__ \ |_| | | (_) |                  
|____/|_|___/\__|_|  \___/                   
        )" << "\n";
        std::string dstrsf1[3] = {"Debian","Ubuntu","Mint"};
        std::cout << R"(
        List 1
        )" << "\n";
        std::system("clear");
        std::cout << "Guess The last distro in this list :" << "[" << dstrsf1[0] << ", " << dstrsf1[1] << ", ?"<< "]" << "\n";
        std::cout << "Hint : This distro is based on Ubuntu and it runs cinnamon DE" << "\n";
        std::string guess1;
        std::cout << "Guess it : ";
        std::cin >> guess1;
        if (guess1 == dstrsf1[2] || guess1 == "mint")
        {
          std::system("clear");
          std::cout << "You win !" << "\n";
        }
        else
        {
          std::system("clear");
          std::cout << "You Lose" << "\n";
          continue;
        }
        std::string dstrsf2[3] = {"Arch","CachyOS","Artix"};
        std::cout << R"(
        List 2
        )" << "\n";
        std::cout << "Guess The last distro in this list :" << "[" << dstrsf2[0] << ", " << dstrsf2[1] << ", ?"<< "]" << "\n";
        std::cout << "Hint : This distro is arch-like but it dosen't have systemd" << "\n";
        std::string guess2;
        std::cout << "Guess it : ";
        std::cin >> guess2;
        if (guess2 == dstrsf2[2] || guess2 == "artix")
        {
          std::system("clear");
          std::cout << "You win !" << "\n";
        }
        else
        {
          std::system("clear");
          std::cout << "You Lose" << "\n";
          continue;
        }
        std::string dstrsf3[3] = {"OpenBSD","NetBSD","FreeBSD"};
        std::cout << R"(
        List 3
        )" << "\n";
        std::cout << "Guess The last distro in this list :" << "[" << dstrsf3[0] << ", " << dstrsf3[1] << ", ?"<< "]" << "\n";
        std::cout << "Hint : This distro is the most popular BSD distro" << "\n";
        std::string guess3;
        std::cout << "Guess it : ";
        std::cin >> guess3;
        if (guess3 == dstrsf3[2] || guess3 == "freebsd" || guess3 == "Freebsd" || guess3 == "FreeBsd")
        {
          std::system("clear");
          std::cout << "You win !" << "\n";
        }
        else
        {
          std::system("clear");
          std::cout << "You Lose" << "\n";
          continue;
        }
        std::string dstrsf4[3] = {"Arch","Void","Gentoo"};
        std::cout << R"(
        List 4
        )" << "\n";
        std::cout << "Guess The last distro in this list :" << "[" << dstrsf4[0] << ", " << dstrsf4[1] << ", ?"<< "]" << "\n";
        std::cout << "Hint : This distro is very very complicated and you should compile all the whole packages" << "\n";
        std::string guess4;
        std::cout << "Guess it : ";
        std::cin >> guess4;
        if (guess4 == dstrsf4[2] || guess4 == "gentoo")
        {
          std::cout << "You win !" << "\n";
        }
        else
        {
          std::cout << "You Lose" << "\n";
          continue;
        }
        break;
        }            
        
        case 6:
        {
            std::cout << "Exiting PeaX OS... Goodbye!" << "\n";
            std::cout << "by Mtitla\n";
            return 0; 
        }
        
        default:
        {
            std::cout << "Invalid Choice!" << "\n";
            break;
        }
        }

        std::string ex;
        std::cout << "Do You want To Exit? (y/n): ";
        std::cin >> ex;
        
        if (ex == "y" || ex == "Y") 
        {
            std::cout << "Exiting PeaX OS... Goodbye!" << "\n";
            std::cout << "by Mtitla\n";
            break; 
        }
        std::cout << "==============================================\n" << "\n";

    } 
    return 0;
}
