#include"ARRMARK.h"
void arr_mark::arr_mark_flag(int xxx,int xx,int zz)
{
	 arrx=int((xx+16.5)/2);
	 arrz=int((zz+19)/2);	
	 arry=int(cout-2.0)/2;

	if(cout>2.0 )	
	{
		cout-=0.10f;
	}
	count1+=1;
    if(!(count1-250) )
	{
		arr[0][arrx][arrz]=1;	
		cout=25.0f;
		count1=0;
	
	}


    if(xxx==cude )
	{
		if(arr[arry][arrx][arrz])
		{
			arr[arry+1][arrx][arrz]=1;
			cout=25.0f;
			count1=0;			
		}
	
	}
	else if(xxx==cude+1)
	{
		if(arr[arry][arrx][arrz] )
		{
			arr[arry+1][arrx][arrz]=2;
			arr[arry+2][arrx][arrz]=2;
			arr[arry+3][arrx][arrz]=2;
			cout=25.0f;
			count1=0;
		
		}
		
	}
	else if(xxx==cude+6)
	{   

		
	

		if(arr[arry][arrx][arrz] || arr[arry][arrx-1][arrz] || arr[arry][arrx+1][arrz])
		{
			arr[arry+1][arrx][arrz]=2;
			arr[arry+1][arrx-1][arrz]=2;
			arr[arry+1][arrx+1][arrz]=2;
			cout=25.0f;
			count1=0;
		}
	


	}
	else if(xxx==cude+11)
	{
		
	
		if(arr[arry][arrx][arrz] || arr[arry][arrx][arrz-1] || arr[arry][arrx][arrz+1])
		{
			arr[arry+1][arrx][arrz-1]=2;
			arr[arry+1][arrx][arrz+1]=2;
			arr[arry+1][arrx][arrz]=2;
			cout=25.0f;
			count1=0;
		}
	
	}
	else if(xxx==cude+2)
	{
		if(arr[arry][arrx][arrz] || arr[arry+2][arrx+1][arrz])
		{
			arr[arry+1][arrx][arrz]=3;
			arr[arry+2][arrx][arrz]=3;
			arr[arry+3][arrx][arrz]=3;
			arr[arry+3][arrx+1][arrz]=3;
			cout=25.0f;
			count1=0;
		}
	}
	else if(xxx==cude+7)
	{
		if(arr[arry][arrx][arrz] || arr[arry][arrx-1][arrz] || arr[arry-1][arrx+1][arrz]  )
		{
			arr[arry+1][arrx][arrz]=3;
			arr[arry+1][arrx-1][arrz]=3;
			arr[arry+1][arrx+1][arrz]=3;
			arr[arry][arrx+1][arrz]=3;
			cout=25.0f;
			count1=0;
		}

	}
	else if(xxx==cude+12)
	{
		if(arr[arry][arrx][arrz] || arr[arry][arrx][arrz+1] || arr[arry][arrx][arrz-1] || arr[arry][arrx+1][arrz-1])
		{
			arr[arry+1][arrx][arrz]=3;
			arr[arry+1][arrx][arrz+1]=3;
			arr[arry+1][arrx][arrz-1]=3;
			arr[arry+1][arrx+1][arrz-1]=3;
			cout=25.0f;
			count1=0;

		}
	}
	else if(xxx==cude+3)
	{
		if(arr[arry][arrx][arrz] || arr[arry+1][arrx+1][arrz])
		{
			arr[arry+1][arrx][arrz]=4;
			arr[arry+2][arrx][arrz]=4;
			arr[arry+2][arrx+1][arrz]=4;
			arr[arry+3][arrx+1][arrz]=4;
			cout=25.0f;
			count1=0;

		}
	}
	else if(xxx==cude+8)
	{
		if(arr[arry-1][arrx][arrz] || arr[arry][arrx-1][arrz] || arr[arry-1][arrx+1][arrz])
		{
			arr[arry][arrx][arrz]=4;
			arr[arry+1][arrx][arrz]=4;
			arr[arry][arrx+1][arrz]=4;
			arr[arry+1][arrx-1][arrz]=4;
			cout=25.0f;
			count1=0;
		}
	}
	else if(xxx==cude+13)
	{
		if(arr[arry][arrx][arrz] || arr[arry][arrx][arrz+1] || arr[arry][arrx+1][arrz] || arr[arry][arrx+1][arrz-1])
		{
			arr[arry+1][arrx][arrz]=4;
			arr[arry+1][arrx][arrz+1]=4;
			arr[arry+1][arrx+1][arrz]=4;
			arr[arry+1][arrx+1][arrz-1]=4;
			cout=25.0f;
			count1=0;
		}

	}

}