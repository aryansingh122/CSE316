
#include<stdio.h>

#include<conio.h>

int main()

{	int i,j,temp,Sum1=0,Sum2=0,CPOS,ID,TD=0,ID1;
int array[15]={143,86,1470,913,1774,948,1509,1022,1750,130,4999,0};

	printf("Number of Disc in the cylinder:(0-4999)= 5000 \n");

	printf("Current request being processed in cylinder : 143 \n");

	printf("Previous request that has been processed : 125 \n");

	//it is just showing that is is moving toward positive direction

	printf("Elements in FIFO list : \n");

	printf("143,86 1470 913 1774 948 1509 1022 1750 130");
   //also store boundary value

	int min=array[0];

	for(i=0;i<12;++i)

	{

		for(j=i+1;j<12;++j)

		{

			if(array[i]>array[j])

			{

				temp=array[i];

				array[i]=array[j];

				array[j]=temp;

			}

		}

	}

	printf("\nElements in Sorted form: ");

	for(i=0;i<12;++i)

	{

		printf("%d \t",array[i]);

	}

	printf("\nCurrent position of the pointer in sorted array : ");

	for(i=0;i<12;++i)

	{

		if(array[i]==143)

	    {

		printf("%d \n",i+1);

	CPOS=i;

	}

}

printf("Individual distance from moving current position to disc Size(4999) \n");	

for(i=CPOS;i<12-1;++i)

{	ID=array[i+1]-array[i];

	printf("%d \n",ID);

	Sum1=Sum1+ID;

}

printf(" Distance from current position to 4999 : %d \n",Sum1);

printf("Individual distance from moving 0 to Current size\n");

for(i=0;i<CPOS-1;i++)

{

	ID1=array[i+1]-array[i];

	printf("%d \n",ID1);

	Sum2=Sum2+ID1;

	}
printf(" Distance from 0 to current position : %d \n",Sum2);
TD=Sum1+Sum2;

printf("Distance when we don't include the distance from 4999 to 0: \n");

printf("%d \n",TD);

printf("Distance when we include the distance from 4999 to 0: \n");

printf("%d ",TD+4999);
}
