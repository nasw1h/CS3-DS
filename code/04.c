#include <stdio.h>
int main()
{
	int i,j,item,loc=0,loc1=0;
	int a[2][2];
	printf("\n This Program is Used To seaech an element in 2Dimensional Array using Linear Search\n");
	printf("\n Enter The Value Of Array:");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Enter The Value To Be Serched:");
	scanf("%d",&item);
	for(i=1;i<=2;i++)
		{
		for(j=1;j<=2;j++)
		{
			if(item==a[i][j])
			{
				loc=i;
				loc1=j;
				break;
			}
		}
	}
	printf("\n The Item is at %d Row And %d Coloumn.",loc,loc1);
	printf("\n\n\t Search Completed.");
}
