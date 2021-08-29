#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include<windows.h>
using namespace std;



class account
{
       int acno;
       char name[50];

       char type;
       long int balance;
public:
    int deposit;
       void create_account();
       void create_ac();
       void show_account() const;
       void modify();
       void dep(int);
       void draw(int);
       void report() const;
       void investment() ;
       int transferBalance(account,int,long int);
       int retacno() const;
       int retdeposit() const;
       char rettype() const;

       account transferBalance(account A2 ,  long int balance ,int deposit)
{
       if (deposit < balance)
       {
              deposit-= balance;
              A2.deposit += balance;
       }
       else
       {
              cout << endl
                   << "Sorry! Transfer failed! Reason: Insufficient Balance."
                   << endl;
       }
       return A2;
};
};

void account::create_account()
{
       cout << "\nEnter The account No. : ";
       cin >> acno;
       cout << "\n\nEnter The Name of The account Holder : ";
       cin.ignore();
       cin.getline(name, 50);
       cout << "\nEnter Type of The account (C/S) : ";
       cin >> type;
       type = toupper(type);
       cout << "\nEnter The Initial amount(>=500 for Saving and >=1000 for current ) : ";
       cin >> deposit;
       cout << "\n\n\nAccount Created..";
}
void account::create_ac()
{
       cout << "\nEnter The account No. : ";
       cin >> acno;
       cout << "\n\nEnter The Name of The account Holder : ";
       cin.ignore();
       cin.getline(name, 50);
       cout << "\nEnter Type of The account (C/S) : ";
       cin >> type;
       type = toupper(type);
       cout << "\nEnter The Initial amount(>=500 for Saving and >=1000 for current ) : ";
       cin >> deposit;

}

void account::show_account() const
{
       cout << "\nAccount No. : " << acno;
       cout << "\nAccount Holder Name : ";
       cout << name;
       cout << "\nType of Account : " << type;
       cout << "\nBalance amount : " << deposit;
}

void account::modify()
{
       cout << "\nAccount No. : " << acno;
       cout << "\nModify Account Holder Name : ";
       cin.ignore();
       cin.getline(name, 50);
       cout << "\nModify Type of Account : ";
       cin >> type;
       type = toupper(type);
       cout << "\nModify Balance amount : ";
       cin >> deposit;
}

void account::dep(int x)
{
       deposit += x;
}

void account::draw(int x)
{
       deposit -= x;
}

void account::report() const
{
       cout << acno << setw(10) << " " << name << setw(10) << " " << type << setw(8) <<    deposit << endl;
}
void account::investment()
{

    system("cls");
    int si;
    cout << "\nInvetment Options are as follows:\n" << endl;
    cout << "1.Cryptocurrency" << endl;
    cout << "2.Stock Market" << endl;
    cout << "3.Gold" << endl;
    cout << "4.Real Estate" << endl;
    cout << "5.Public Provident Fund" << endl;
    cout << "6.Bank Fixed deposit" << endl;
    cout<<"Select anyone option for short overview of the same: "<<endl;
    cin>>si;
    system("cls");
    switch (si)
    {
    case 1:
        cout<<" 1)Cryptocurrency:\n "<<endl;
           cout<<"* A cryptocurrency is a digital or virtual currency that is secured by cryptography, which makes it nearly impossible\n  to counterfeit or double-spend."<<endl;
           cout<<"* Many cryptocurrencies are decentralized networks based on blockchain technology—a distributed ledger enforced by a\n  disparate network of computers."<<endl;
           cout<<"* Cryptocurrencies have been described as a transformative technology that could revolutionize a number of industries."<<endl;
           cout<<"* Because they cannot be printed or seized, cryptocurrencies may also provide a safe store of value."<<endl;
           cout<<"* However, cryptocurrencies remain highly speculative, and there is no guarantee that they will ever achieve mainstream\n  usage."<<endl;
           cout<<"* There are several complex security protocols that should be followed carefully before buying cryptocurrency."<<endl;

           break;
    case 2:
           cout<<"2.Stock Market:\n"<<endl;
           cout<<"* The stock market refers to the collection of markets and exchanges where regular activities of buying, selling,\n  and issuance of shares of publicly-held companies take place."<<endl;
           cout<<"* In a nutshell, stock markets provide a secure and regulated environment where market participants can transact in\n  shares and other eligible financial instruments with confidence with zero- to low-operational risk."<<endl;
           cout<<"* Stock markets are vital components of a free-market economy because they enable democratized access to trading and\n  exchange of capital for investors of all kinds."<<endl;
           cout<<"* They perform several functions in markets, including efficient price discovery and efficient dealing."<<endl;
           cout<<"* In the US, the stock market is regulated by the SEC and local regulatory bodies."<<endl;
           break;
    case 3:
           cout << "3.Gold:"<<endl;
           cout<<  "* Gold is one of the most preferred investments in India. High liquidity and inflation-beating capacity are its\n  strong selling points, not to mention charm, prestige, and so on. "<< endl;
           cout << "* Gold prices shoot up when the markets face turbulence. Though there are phases when markets witness a fall in\n  gold prices, it won’t last for long, and always makes a strong comeback."<< endl;
           cout << "* The most direct way to own gold is to purchase physical gold bars or coins, but these can be illiquid and must be\n  stored securely."<< endl;
           cout << "* ETFs and mutual funds that track the price of gold are also popular, and if you have access to derivatives markets\n  in your brokerage account you can also use gold futures and options."<< endl;
           cout << "* To get at gold indirectly, you may also want to consider investing in gold mining stocks, although these companies'\n  share prices do not track gold's value very well over the long run."<< endl;
           break;
    case 4:
           cout << "4.Real Estate: "<<endl;
           cout << "* Real estate investing involves the purchase, ownership, management, rental and/or sale of real estate for profit. "<< endl;
           cout << "* Improvement of realty property as part of a real estate investment strategy is generally considered to be a sub-specialty\n  of real estate investing called real estate development. "<< endl;
           cout << "* Real estate is an asset form with limited liquidity relative to other investments (such as stocks or bonds that openly\n  trade on financial markets)."<< endl;
           cout << "* One of the key ways investors can make money in real estate is to become a landlord of a rental property."<< endl;
           cout << "* Flippers buy undervalued real estate, fix it up, and sell for a profit."<< endl;
           cout << "* Real estate investment trusts (REITs) provide real estate exposure without the need to own, operate, or finance properties."<< endl;
           break;
    case 5:
           cout<<"5.Public Provident Fund:"<<endl;
           cout<<"* Public provident fund is a popular investment scheme among investors courtesy its multiple investor-friendly features\n  and associated benefits."<<endl;
           cout<<"* It is a long-term investment scheme popular among individuals who want to earn high but are also looking for stable returns."<<endl;
           cout<<"* One of the key ways investors can make money in real estate is to become a landlord of a rental property."<<endl;
           cout<<"* Flippers buy undervalued real estate, fix it up, and sell for a profit."<<endl;
           cout<<"* Real estate investment trusts (REITs) provide real estate exposure without the need to own, operate, or finance properties."<<endl;
           break;
    case 6:
           cout<<"6.*Bank Fixed deposit:"<<endl;
           cout<<"* In a Fixed Deposit, you put a lump sum in your bank for a fixed tenure at an agreed rate of interest."<<endl;
           cout<<"* At the end of the tenure, you receive the amount you have invested plus compound interest.FDs are also called term deposits."<<endl;
           cout<<"* Fixed deposits are a type of product offered by a bank with a fixed interest payout."<<endl;
           cout<<"* Debentures are unsecured debt instruments issued by businesses to raise capital funding, and with more complex structuring\n  provisions than fixed deposits."<<endl;
           cout<<"* The debenture may include fixed or floating interest, and they may be either convertible or nonconvertible."<<endl;
           break;
    default:
                     cout << "enter valid options";
              }
              //cin.ignore();
             // cin.get();
       } //while (ch != '6');


int account::retacno() const
{
       return acno;
}

int account::retdeposit() const
{
       return deposit;
}

char account::rettype() const
{
       return type;
}


void write_account();
void display_sp(int);
void modify_account(int);
void delete_account(int);
void display_all();
void investment_options();
void transfer();
void deposit_withdraw(int, int);
void intro();



int main()
{
  HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleTextAttribute(h,6);

       account A1, A2;
       long int balance;
       char ch;
       int num;
       intro();
       do
       {
              system("cls");
              SetConsoleTextAttribute(h,10);
               cout << "\n\n\t  *******************MAIN MENU*******************";
               cout << "\n\n\t  *           01. NEW ACCOUNT                   *";
               cout << "\n\n\t  *           02. DEPOSIT AMOUNT                *";
               cout << "\n\n\t  *           03. WITHDRAW AMOUNT               *";
               cout << "\n\n\t  *           04. BALANCE ENQUIRY               *";
               cout << "\n\n\t  *           05. TRANSFER MONEY                *";
               cout << "\n\n\t  *           06. ALL ACCOUNT HOLDER LIST       *";
               cout << "\n\n\t  *           07. CLOSE AN ACCOUNT              *";
               cout << "\n\n\t  *           08. MODIFY AN ACCOUNT             *";
               cout << "\n\n\t  *           09. INVESTMENT OPTIONS            *";
               cout << "\n\n\t  *           0. EXIT                           *";
               cout << "\n\n\t  ***********************************************";
              cout << "\n\n\t    Select Your Option (1-9) ";
              cin >> ch;
              system("cls");
              switch (ch)
              {
              case '1':
              SetConsoleTextAttribute(h,9);
                     write_account();
                     break;
              case '2':
              SetConsoleTextAttribute(h,5);
                     cout << "\n\n\tEnter The account No. : ";
                     cin >> num;
                     deposit_withdraw(num, 1);
                     break;
              case '3':
              SetConsoleTextAttribute(h,12);
                     cout << "\n\n\tEnter The account No. : ";
                     cin >> num;
                     deposit_withdraw(num, 2);
                     break;
              case '4':
              SetConsoleTextAttribute(h,13);
                     cout << "\n\n\tEnter The account No. : ";
                     cin >> num;
                     display_sp(num);
                     break;
              case '5':
              SetConsoleTextAttribute(h,14);
                     transfer();
                     break;
              case '6':
              SetConsoleTextAttribute(h,10);
                     display_all();
                     break;
              case '7':
              SetConsoleTextAttribute(h,11);
                     cout << "\n\n\tEnter The account No. : ";
                     cin >> num;
                     delete_account(num);
                     break;
              case '8':
              SetConsoleTextAttribute(h,9);
                     cout << "\n\n\tEnter The account No. : ";
                     cin >> num;
                     modify_account(num);
                     break;
              case '9':
              SetConsoleTextAttribute(h,2);
                     investment_options();
                     break;
              case '0':
              SetConsoleTextAttribute(h,12);
                     cout << "\n\n\tThanks for using bank management system";
                     break;
              default:
                     cout << "\a";
              }
              cin.ignore();
              cin.get();
       } while (ch != '10');
       return 0;
}



void write_account()
{
       account ac;
       ofstream outFile;
       outFile.open("account.dat", ios::binary | ios::app);
       ac.create_account();
       outFile.write(reinterpret_cast<char *>(&ac), sizeof(account));
       outFile.close();
}



void display_sp(int n)
{
       account ac;
       bool flag = false;
       ifstream inFile;
       inFile.open("account.dat", ios::binary);
       if (!inFile)
       {
              cout << "File could not be open !! Press any Key...";
              return;
       }
       cout << "\nBALANCE DETAILS\n";
       while (inFile.read(reinterpret_cast<char *>(&ac), sizeof(account)))
       {
              if (ac.retacno() == n)
              {
                     ac.show_account();
                     flag = true;
              }
       }
       inFile.close();
       if (flag == false)
              cout << "\n\nAccount number does not exist";
}



void modify_account(int n)
{
       bool found = false;
       account ac;
       fstream File;
       File.open("account.dat", ios::binary | ios::in | ios::out);
       if (!File)
       {
              cout << "File could not be open !! Press any Key...";
              return;
       }
       while (!File.eof() && found == false)
       {
              File.read(reinterpret_cast<char *>(&ac), sizeof(account));
              if (ac.retacno() == n)
              {
                     ac.show_account();
                     cout << "\n\nEnter The New Details of account" << endl;
                     ac.modify();
                     int pos = (-1) * static_cast<int>(sizeof(account));
                     File.seekp(pos, ios::cur);
                     File.write(reinterpret_cast<char *>(&ac), sizeof(account));
                     cout << "\n\n\t Record Updated";
                     found = true;
              }
       }
       File.close();
       if (found == false)
              cout << "\n\n Record Not Found ";
}



void delete_account(int n)
{
       account ac;
       ifstream inFile;
       ofstream outFile;
       inFile.open("account.dat", ios::binary);
       if (!inFile)
       {
              cout << "File could not be open !! Press any Key...";
              return;
       }
       outFile.open("Temp.dat", ios::binary);
       inFile.seekg(0, ios::beg);
       while (inFile.read(reinterpret_cast<char *>(&ac), sizeof(account)))
       {
              if (ac.retacno() != n)
              {
                     outFile.write(reinterpret_cast<char *>(&ac), sizeof(account));
              }
       }
       inFile.close();
       outFile.close();
       remove("account.dat");
       rename("Temp.dat", "account.dat");
       cout << "\n\n\tRecord Deleted ..";
}

void investment_options()
{
    account ac;
    ac.investment();
}

void transfer()
{
       account A1, A2;
       int deposit;
       long int balance;
       account ac;
       ifstream inFile;
       ofstream outFile;
       cout << "Enter Details of transfering Account(Account 1)\n";
       A1.create_ac();
       cout << endl
            << "Enter Details of receiving Account(Account 2)\n";
       cin.ignore();
       A2.create_ac();
       cout << endl
            << "Enter total amount which you want to transfer from Account 1 to Account 2: ";
       cin >> balance;
       A2 = A1.transferBalance(A2,balance,deposit);
       cout << endl;
       cout << "Account 2";
       A2.show_account();
}



void display_all()
{
       account ac;
       ifstream inFile;
       inFile.open("account.dat", ios::binary);
       if (!inFile)
       {
              cout << "File could not be open !! Press any Key...";
              return;
       }
       cout << "\n\n\t\tACCOUNT HOLDER LIST\n\n";
       cout << "====================================================\n";
       cout << "A/c no.           NAME           Type  Balance\n";
       cout << "====================================================\n";
       while (inFile.read(reinterpret_cast<char *>(&ac), sizeof(account)))
       {
              ac.report();
       }
       inFile.close();
}



void deposit_withdraw(int n, int option)
{
       int amt;
       bool found = false;
       account ac;
       fstream File;
       File.open("account.dat", ios::binary | ios::in | ios::out);
       if (!File)
       {
              cout << "File could not be open !! Press any Key...";
              return;
       }
       while (!File.eof() && found == false)
       {
              File.read(reinterpret_cast<char *>(&ac), sizeof(account));
              if (ac.retacno() == n)
              {
                     ac.show_account();
                     if (option == 1)
                     {
                            cout << "\n\n\tTO DEPOSITE AMOUNT ";
                            cout << "\n\nEnter The amount to be deposited";
                            cin >> amt;
                            ac.dep(amt);
                     }
                     if (option == 2)
                     {
                            cout << "\n\n\tTO WITHDRAW AMOUNT ";
                            cout << "\n\nEnter The amount to be withdraw";
                            cin >> amt;
                            int bal = ac.retdeposit() - amt;
                            if ((bal < 500 && ac.rettype() == 'S') || (bal < 1000 && ac.rettype() == 'C'))
                                   cout << "Insufficience balance";
                            else
                                   ac.draw(amt);
                     }
                     int pos = (-1) * static_cast<int>(sizeof(ac));
                     File.seekp(pos, ios::cur);
                     File.write(reinterpret_cast<char *>(&ac), sizeof(account));
                     cout << "\n\n\t Record Updated";
                     found = true;
              }
       }
       File.close();
       if (found == false)
              cout << "\n\n Record Not Found ";
}



void intro()
{
cout << "\n\n\n\t          BANK";
 cout << "\n\n\t       MANAGEMENT";
 cout << "\n\n\t         SYSTEM";
 cout << "\n\n\n\n\t MADE BY : BITSPLEASE";
 cout << "\n\n\n\n\tTeam Members: Dhruv Pundkar \n\t              Razi Shaikh \n\t              Siddhi Hagawane ";
 cout << "\n\n\t WCE ACSES Genesis Project";
       cin.get();
}