/*FACULTY OF COMPUTERS AND ARTIFICIAL INTELLIGENCE, CAIRO UNIVERSITY
Author :Abdelrhman sayed ali
Program Name: Simple Substitution Cipher.c plus plus*/

#include <iostream>
#include <string>
#include <regex>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <map>
#include <cctype>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void encrypted()
{

    string text_cipher,encrypted="";
    int shift_key;
    int index ;
    char small_alphabit[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o',
    'p','q','r','s','t','u','v','w','x','y','z'};//a>>Asci =97 :122
    char capital_alphabit [26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
    'O','P','Q','R','S','T','U','V','W','X','Y','Z'};//A>>Asci =65 :90
    while(true)
        {

            cout<<">>>>Please, Enter number of shifts : "<<endl;
            cin>>shift_key;
            if (shift_key>=0 && shift_key<26)//>>>>>>>>>index(0-25)
                {
                    break;
                }
            else
                {
                    continue;
                }


        }

    cin.ignore();
    while (true)
        {
            cout<<">>>>Please, Enter the text to cipher it : "<<endl;
            getline(cin,text_cipher);
            for(int i=0;i<text_cipher.size();i++)
                {
                    if (int(text_cipher[i])>=65 && int(text_cipher[i])<91)//capital
                    {
                        index = int(text_cipher[i])-65+shift_key;
                        if (index>25)
                            {
                                index-=26;//number of letters = 26
                                capital_alphabit[index];
                                encrypted+=capital_alphabit[index];
                            }
                        else
                            {
                                capital_alphabit[index];
                                encrypted+=capital_alphabit[index];
                            }

                    }

                    else if(int(text_cipher[i])>=97 && int(text_cipher[i]<123))//small
                        {
                            index = int(text_cipher[i])-97+shift_key;
                            if (index>25)
                                {
                                    index-=26;
                                    small_alphabit[index];
                                    encrypted+=small_alphabit[index];
                                }
                            else
                                {
                                    small_alphabit[index];
                                    encrypted+=small_alphabit[index];

                                }

                          }
                    else if (int(text_cipher[i]) == 32)
                        {
                           encrypted+=' ';


                         }



            }
        cout<<"The Encrypted Text is : "<<endl<<encrypted<<endl;
        break;

        }



}
void decrypted()
{
    string text_cipher,decrypted="";
    int shift_key;
    int index ;
    char small_alphabit[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o',
    'p','q','r','s','t','u','v','w','x','y','z'};//a>>Asci =97 :122
    char capital_alphabit [26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
    'O','P','Q','R','S','T','U','V','W','X','Y','Z'};//A>>Asci =65 :90
    while(true)
        {

            cout<<">>>>Please, Enter number of shifts : "<<endl;
            cin>>shift_key;
            if (shift_key>=0 && shift_key<26)//>>>>>>>>>index(0-25)
                {
                    break;
                }
            else
                {
                    continue;
                }


        }

    cin.ignore();
    while (true)
        {
            cout<<">>>>Please, Enter the text to decipher it : "<<endl;
            getline(cin,text_cipher);
            for(int i=0;i<text_cipher.size();i++)
                {
                    if (int(text_cipher[i])>=65 && int(text_cipher[i])<91)//capital
                    {
                        index = int(text_cipher[i])-65-shift_key;
                        if (index<0)
                            {
                                index+=26;//number of letters = 26
                                capital_alphabit[index];
                                decrypted+=capital_alphabit[index];
                            }
                        else
                            {
                                capital_alphabit[index];
                                decrypted+=capital_alphabit[index];
                            }

                    }

                    else if(int(text_cipher[i])>=97 && int(text_cipher[i]<123))//small
                        {
                            index = int(text_cipher[i])-97-shift_key;
                            if (index<0)
                                {
                                    index+=26;
                                    small_alphabit[index];
                                    decrypted+=small_alphabit[index];
                                }
                            else
                                {
                                    small_alphabit[index];
                                    decrypted+=small_alphabit[index];

                                }

                          }
                    else if (int(text_cipher[i]) == 32)
                        {
                           decrypted+=' ';


                         }



            }
        cout<<"The Decrypted Text is : "<<endl<<decrypted<<endl;
        break;

        }




}
int main()
{
    system("cls");
    cout<<"Welcome ,User"<<endl;
    cout<<endl;
    cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
    while (true)
        {
            int choice ;
            cout<<endl;
            cout<<"**LIST OF CHOICES**"<<endl;
            cout<<"1)Encrypted\n"<<"2)Decrypted\n"<<"3)End"<<endl;
             if (!cin)
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            cout<<"Enter the choice from list : "<<endl;
            cin>>choice;
            if (choice == 1)
            {
                system("cls");
                encrypted();

            }
            else if (choice == 2)
            {
                system("cls");
                decrypted();

            }
            else if (choice == 3)
                {
                    cout<<"**THANK YOU FOR USING THIS PROGRAM**"<<endl;
                    break;
                }
            else
                {
                    system("cls");
                    continue;

                }
        }


}


