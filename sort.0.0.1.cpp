#include <iostream>
#include <utility>
#include <sstream>
using namespace std;
 
bool read(double *array, unsigned int size)
{
	bool k=true;
	string mas;
	getline(cin,mas);
	istringstream stream(mas);
	for(int i = 0; i<size; i++)
	{
		if(!(stream>>array[i]))
		{k = false;
		return false;}
	}
   return true;
 } 
 void selection_sort (double* array, unsigned int size) 
 {
   for (unsigned int i=0; i<size; i++) 
	{
	  for (unsigned j=i+1; j<size; j++) 
		{
		  if (array[i] > array[j])
			{
			 swap (array[i], array[j]);
			}
		}
	}
}
 void print_array(double * array, unsigned int size)
{
	for (unsigned int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}
 int main()
 {

unsigned int size;
cin>>size;
cin.get();
double *array = new double[size];
if(read(array, size))
	{ 
		selection_sort(array, size);
		print_array(array, size);
		cin.get();
	}
     else
	{
		cout << "An error has occured while reading numbers from line";
		cin.get();
	}
	delete array;
        return 0;

 	
 }


