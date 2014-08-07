//letter frequency counter
#include <iostream>
#include <fstream>
#include <string>

//assume lowercase
using namespace std;
int main()
{
    int freq[26]={0};
    char ch='a';
    string inny;
    ifstream filein;
    filein.open("input.txt", ios::in);
    filein >> inny;
    filein.close();

    int length = inny.length();
    while (length > 0)
    {
        freq[((int) inny[length-1])-97]++;
        length--;
    }
    while ((length) < 26)
    {
        while (freq[length] > 0)
        {
            cout << "-";
            freq[length]--;
        }
        cout << ch++;
        length++;
        cout << endl;
    }
    int diff = 'h'-'e'; //parameters
    length = inny.length();
    int count = 0;
    int charVal;
    while (length > count)
    {
        charVal = (int) inny[count]-diff; //positive or negative depending on offset
        
        if (charVal < 97)
        {
           charVal=charVal+26; 
        }
        cout <<  (char)charVal;
        count++;
        
    }
    cout << endl;
    return 0;
    
}