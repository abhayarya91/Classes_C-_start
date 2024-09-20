#include<iostream>
#include<fstream>
using namespace std;
/*int main()
{
	ofstream onFile;
	onFile.open("C:\\Users\\asus\\Desktop\\abhay.txt");
	onFile<<"thank you for Open this file.....God bless you :)";
	cout<<"file created successfully and also data written in the File :)"<<endl;
	onFile.close();
	return 0;
	
	
}

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream inFile;
	ofstream onFile;
	//string str;
	char str;
	inFile.open("C:\\Users\\asus\\Desktop\\abhay.txt");
	onFile.open("C:\\Users\\asus\\Desktop\\abhay2.txt");
	
	
	while(inFile.get(str))
	{
		onFile.put(str);
	}
	cout<<"Copied :)";
	
//	inFile>>str;
	//cout<<str;
	//onFile<<"thank you for Open this file.....God bless you :)";
	//cout<<"file created successfully and also data written in the File :)"<<endl;
	inFile.close();
	onFile.close();
	return 0;
	
}*/



#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int value=remove("C:\\Users\\asus\\Desktop\\abhay2.txt");
	if(value==0)
	{
		cout<<"file Deleted"<<endl;
	}
	else
	{
		cout<<"File not Deleted"<<endl;
	}
	return 0;
}
