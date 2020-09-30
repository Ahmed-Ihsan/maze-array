#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int h, w, p;
	cout << "w";
	cin >> w;
	cout << "h";
	cin >> h;
	int a[w][h];
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			int n = 1;
			cout << "a[" << j << "][" << i << "]= " << endl;
			if (n < 0)
			{
				a[j][i] = -1;
			}
			else if (n > 0)
			{
				a[j][i] = 1;
			}
			else
			{
				a[j][i] = 0;
			}
		}
	}

	cout << "_______________________________" << endl;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cout << "a[" << j << "][" << i << "]= " << a[j][i] << endl;
		}
	}

	cout << "_______________________________" << endl;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (a[j][i] <= 0)
				cout << a[j][i] << "   ";
			else
				cout << a[j][i] << "    ";
		}
		cout << endl;
	}
	cout << "=========================\n";
	int a2[w][h];
	int c=0;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cout << "a2[" << j << "][" << i << "]= " <<c  << endl;
			a2[j][i] = c;
			c++;
		}
	}

	cout << "_______________________________" << endl;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cout << "a2[" << j << "][" << i << "]= " << a2[j][i] << endl;
		}
	}

	cout << "_______________________________" << endl;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (a2[j][i] < 10)
				cout << a2[j][i] << "    ";
			else
				cout << a2[j][i] << "   ";
		}
		cout << endl;
	}

	cout << "_______________________________" << endl;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (a[j][i] == 1)
			{
				p = a2[j][i];
			}
		}
	}
	p=9;
	cout << "p1= " << p << endl;
	cout << "_______________________________" << endl;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			a2[j][i] = p - a2[j][i];
			if (a2[j][i] < 0)
				a2[j][i]*=1;
			cout << a2[j][i] << "   ";
		}
		cout << endl;
	}
	cout << "_______________________________" << endl;
	int g = 0, o = 0;
	for (int x = 0; x<101 ; x++)
	{		
	
			a2[g][o]=22;
			if(a2[g][o+1]==0){
				a2[g][o+1]=323;
				break;
			}
			if(a2[g+1][o]==0){
				a2[g+1][o]=323;
				break;
			}
		if (g==o && g==0){
			if(a2[g][o+1]==0 || a2[g+1][o]==0){
				a2[g][o+1]=323;
				break;
			}
				
			if(a2[g][o+1]<=a2[g+1][o] && a2[g][o+1]!=0 && a2[g][o+1]>0)
			{
				a2[g][o+1]=22;
				o++;
				cout<<2<<endl;
				cout<<o<<endl;
			}
			else
			if(a2[g+1][o]<=a2[g][o+1] && a2[g][o+1]!=0 && a2[g][o+1]>0)
			{
				a2[g+1][o]=22;
				g++;
				cout<<g<<endl;
			}
		}

		if (g!=w){
			if(a2[g][o+1]==0){
				a2[g][o+1]=323;
				break;
			}
			if(a2[g+1][o]==0){
				a2[g+1][o]=323;
				break;
			}
			if(a2[g+1][o]<=a2[g][o+1] && a2[g][o+1]!=0 && a2[g][o+1]>0)
			{
				a2[g+1][o]=22;
				g++;
				cout<<g<<endl;
			}
			else
			if(a2[g][o+1]<=a2[g+1][o] && a2[g][o+1]!=0 && a2[g][o+1]>0)
			{
				a2[g][o+1]=22;
				o++;
				cout<<o<<endl;
			}
			else
				if(a2[g+1][o]!=0 && a2[g+1][o]>0 && a2[g][o+1]!=0)
		{
			a2[g+1][o]=22;
			g++;
			cout<<o<<endl;	
		}
			
		}
		else
		if (o!=h){
			if(a2[g][o+1]==0){
				a2[g][o+1]=323;
				break;
			}
			if(a2[g+1][o]==0){
				a2[g+1][o]=323;
				break;
			}
			if(a2[g][o+1]<=a2[g+1][o] && a2[g][o+1]!=0 && a2[g][o+1]>0)
			{
				a2[g][o+1]=22;
				o++;
				cout<<o<<endl;
			}
			else
				if(a2[g+1][o]!=0 && a2[g+1][o]>0 && a2[g][o+1]!=0)
		{
			a2[g+1][o]=22;
			g++;
			cout<<o<<endl;	
		}
		}
		
	
	}

	cout << "_______________________________" << endl;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (a2[j][i] < 10)
				cout << a2[j][i] << "    ";
			else
				cout << a2[j][i] << "   ";
		}
		cout << endl;
	}
}
