#include<stdio.h>
#include<string.h>

int main(){
	// copy one array elems to another
	int arr1[5]={1,2,3,4,5};
	int arr_len = sizeof(arr1)/sizeof(int);
	int arr2[arr_len];
	for (int i = 0; i < arr_len; i++){	
		arr2[i] = arr1[i];
	}
	for (int i = 0; i < arr_len; i++){	
		printf("%d\n",arr2[i]);
	}
	
	// odd even elements of array
	int arr[5] = {1,2,3,4,5}, odd_count=0, even_count=0;
	for (int i = 0; i < sizeof(arr)/sizeof(int); i++){
		if (arr[i]%2 == 0){
			even_count++;
		} else {
			odd_count++;
		}
	}
	printf("even count: %d | odd count: %d\n",even_count,odd_count);
	
	// print array in reverse order
	char arr[] = "this that";
	for (int i = sizeof(arr)/sizeof(char); i >= 0; i--){
		printf("%c", arr[i]);
	}
	
	// count of zero, positive & negative elems in array
	int arr[3][3] = {{0,1,2},{-1,-2,-3},{0,4,5}}, positive=0, negative=0, zero=0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j]>0)
			{
				positive++;
			} else if (arr[i][j]<0)
			{
				negative++;
			} else
			{
				zero++;
			}	
		}
	}
	printf("positive: %d | negative: %d | zero: %d\n",positive,negative,zero);
	

	return 0;
}

