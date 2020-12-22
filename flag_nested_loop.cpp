#include<iostream>
using namespace std;

int main()
{ const int N=5;
bool done=false;
for (int i=0; i<N; i++)
{ for (int j=0; j<N && !done; j++)
{ for (int k=0; k<N && !done; k++)
if (i+j+k>N) done = true;
else cout << i+j+k << " ";
cout << "* ";
}
cout << "." << endl; // inside the i loop,outside the j loop
done = false;
}
}
