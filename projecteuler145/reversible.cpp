#include <stdio.h>
#include <math.h>



int accuracylog(int a) {
	long double aa;
	aa = log(a) / log(10);
	return floor(aa + 0.000000000000001) + 1;
}


int reversemath(int n,int y,int d,int l) {
	if (n == 1) return 0;
	int g = y ? 30 : 20;
	int m = floor(n / 2);
	int a = 0;
	if(l!=1)
	if (d)
		if(m== (n) / 2.)
		a = (g * (pow(30, m-1)));
		else;
		else
		a=(g * (pow(30, m) - 1)) / 29;
	m = floor((n + 1) / 4);
	if(m>0)
		if(d)
			if(floor((n + y + 1) / 4.)== (n+y + 1) / 4.)
			a += 100 * ((pow(500, m-1)));
			else;
		else
			a += 100 * ((pow(500, m) - 1) / (500 - 1));
	return a;
}




int reverse2(int  a, int b, int n, int l,int h,int d,int*A)
{
	int total = 0, count = 0;
	if (h == 0) {
		if (l == 0) {

			if (a + 1 == n)
				if (b == 0) return !(d+!a); else ;
			else if (a == n)
				if (b == 0) return 1; else return 0;

			for (int i = 0; i <= A[a / 2 ]-1; i++)
				for (int j = 0; j <= 9; j++)
					if (b + i + j <= 9 && (b + i + j) % 2 == 1)
					{
						//printf("%d%0*d%d ", i, n - a - 2, 0, j);
						if ((a==0|d)&(i*j!=0|a!=0))//count+= reverse2(a + 2, 0, n, 0, 2, 1, A);
						//else 
						count++;
						


					}

			int count2 = 0; // recherche(n - a, 0, 0, 0);
			
			if(count)
			count *= reverse2(a + 2, 0, n, 0,2,1,A);
			if (!d)
			count += reverse2(a , 0, n-1, 0, 2, 0, A+1);
			total += count;
			count = 0;
			for (int i = A[a / 2]; i <= A[a / 2 ]; i++)
				for (int j=1-!!a; j <= A[n-1-a / 2]; j++)
					if (b + i + j <= 9 && (b + i + j) % 2 == 1)
					{
						//printf("%d%0*d%d ", i, n - a - 2, 0, j);
						count++;

					}

			count2 = 0;// recherche(n - a, 0, 0, 0);
			if(count)
			count *= reverse2(a + 2, 0, n, 0,0,1,A);

			total += count;
			count = 0;
			for (int i = A[a / 2 ]; i <= A[a / 2]; i++)
				for (int j = A[n - 1 - a / 2]+1; j <=9; j++)
					if (b + i + j <= 9 && (b + i + j) % 2 == 1)
					{
						//printf("%d%0*d%d ", i, n - a - 2, 0, j);
						count++;

					}

			count2 = 0; // recherche(n - a, 0, 0, 0);
			if (count!=0)
			count *= reverse2(a + 2, 0, n, 0, 1,1, A);
			total += count;
			

			if (count != count2)
				count = count;
			//total = count;
			count = 0;

			if (a == 0&(n+1)%4==0) {

				for (int i = 0; i <= A[a / 2] - 1; i++)
					for (int j = 0; j <= 9; j++)
						if (b + i + j >= 10 && (b + i + j) % 2 == 1)
						{
							//printf("%d%0*d%d ", i, n - a - 2, 0, j);
							if ((a==0|d)&(i*j!=0|a!=0))//count+= reverse2(a + 2, 0, n, 0, 2, 1, A);
												  //else 
								count++;



						}

				count2 = 0;// recherche(n - a, 1, 0, 0);

				 if (count)
					 count *= reverse2(a + 2, 1, n, 1, 2, 1, A);
				// if (!d)
				//	 count += reverse2(a, 1, n - 1, 1, 2, 0, A + 1);

				
				

				total += count;
				count = 0;
				for (int i = A[a / 2]; i <= A[a / 2]; i++)
					for (int j=1-!!a; j <= A[n - 1 - a / 2]; j++)
						if (b + i + j >= 10 && (b + i + j) % 2 == 1)
						{
							//printf("%d%0*d%d ", i, n - a - 2, 0, j);
							count++;

						}

				int count2 = 0; // recherche(n - a, 0, 0, 0);
				if (count)
					count *= reverse2(a + 2, 1, n, 1, 0,1, A);
				total += count;
				count = 0;
				for (int i = A[a / 2]; i <= A[a / 2]; i++)
					for (int j = A[n - 1 - a / 2] + 1; j <= 9; j++)
						if (b + i + j >= 10 && (b + i + j) % 2 == 1)
						{
							//printf("%d%0*d%d ", i, n - a - 2, 0, j);
							count++;

						}

				count2 = 0; // recherche(n - a, 0, 0, 0);
				if (count != 0)
					count *= reverse2(a + 2, 1, n, 1, 1,1, A);
				total += count;
				count = 0;

			}
			total += count + (!d)*((b != 0) * (5) + 1 * ((b == 0)&(a != 0)));
		}
		else
		{




			if (a + 1 == n)
				if (b == 0) return 0; else return ((A[a / 2 ]<5)?A[a / 2]+1:5);
			else if (a == n)
				return 0;


			if (b == 1) {
				for (int i = 0; i <= A[a / 2] - 1; i++)
					for (int j = 0; j <= 9; j++)
						if (b + i + j <= 9 && (b + i + j) % 2 == 1)
						{
							//printf("%d%0*d%d ", i, n - a - 2, 0, j);
							if ((a==0|d)&(i*j!=0|a!=0))//count+= reverse2(a + 2, 0, n, 0, 2, 1, A);
												  //else 
								count++;



						}

				

				if (count)
					count *= reverse2(a + 2, 0, n, 1,2,1,A);
				//if (!d)                alternative=1
				//	count +=     reverse2(a , 0, n - 1, 1, 2, 0, A + 1);
				total += count;
				count = 0;
				for (int i = A[a / 2]; i <= A[a / 2]; i++)
					for (int j=1-!!a; j <= A[n - 1 - a / 2]; j++)
						if (b + i + j <= 9 && (b + i + j) % 2 == 1)
						{
							//printf("%d%0*d%d ", i, n - a - 2, 0, j);
							count++;

						}

				if (count)
					count *= reverse2(a + 2, 0, n, 1, 0, 1,A);

				total += count;
				count = 0;
				for (int i = A[a / 2]; i <= A[a / 2]; i++)
					for (int j = A[n - 1 - a / 2] + 1; j <= 9; j++)
						if (b + i + j <= 9 && (b + i + j) % 2 == 1)
						{
							//printf("%d%0*d%d ", i, n - a - 2, 0, j);
							count++;

						}

				if (count != 0)
					count *= reverse2(a + 2, 0, n, 1, 1, 1,A);
				total += count;

				//total = count;
				count = 0;



			}
			else {
				

				for (int i = 0; i <= A[a / 2] - 1; i++)
					for (int j = 0; j <= 9; j++)
						if (b + i + j >= 10 && (b + i + j) % 2 == 1)
						{
							//printf("%d%0*d%d ", i, n - a - 2, 0, j);
							if ((a==0|d)&(i*j!=0|a!=0))//count+= reverse2(a + 2, 0, n, 0, 2, 1, A);
												  //else 
								count++;



						}





				if (count)
					count *= reverse2(a + 2, 1, n, 1, 2, 1, A);
				//if (!d)    alternative=1
				//	count +=     reverse2(a, 1, n - 1, 1, 2, 0, A + 1);



				total += count;
				count = 0;
				for (int i = A[a / 2]; i <= A[a / 2]; i++)
					for (int j=1-!!a; j <= A[n - 1 - a / 2]; j++)
						if (b + i + j >= 10 && (b + i + j) % 2 == 1)
						{
							//printf("%d%0*d%d ", i, n - a - 2, 0, j);
							count++;

						}

				if (count)
					count *= reverse2(a + 2, 1, n, 1, 0, 1,A);
				total += count;
				count = 0;
				for (int i = A[a / 2]; i <= A[a / 2]; i++)
					for (int j = A[n - 1 - a / 2] + 1; j <= 9; j++)
						if (b + i + j >= 10 && (b + i + j) % 2 == 1)
						{
							//printf("%d%0*d%d ", i, n - a - 2, 0, j);
							count++;

						}

				if (count != 0)
					count *= reverse2(a + 2, 1, n, 1, 1, 1,A);
				total += count;
				count = 0;


			}

			total += count + (!d)*(b != 0) * (5);

		}

	}
	else if (h == 1) {


      if (l == 0) {

			if (a + 1 == n)
				if (b == 0) return !d; else   ;
			else if (a == n)
				return 0;



			for (int i = 0; i <= A[a / 2] - 1; i++)
				for (int j = 0; j <= 9; j++)
					if (b + i + j <= 9 && (b + i + j) % 2 == 1)
					{
						//printf("%d%0*d%d ", i, n - a - 2, 0, j);
						if ((a==0|d)&(i*j!=0|a!=0))//count+= reverse2(a + 2, 0, n, 0, 2, 1, A);
											  //else 
							count++;



					}

			if (count)
				count *= reverse2(a + 2, 0, n, 0, 2, 1,A); 
			//if (!d)                 overflow=1
			//	count +=     reverse2(a, 0, n - 1, 0, 2, 0, A + 1);
			

			

			

			total += count;
			count = 0;
			for (int i = A[a / 2]; i <= A[a / 2]; i++)
				for (int j=1-!!a; j < A[n - 1 - a / 2]; j++)
					if (b + i + j <= 9 && (b + i + j) % 2 == 1)
					{
						//printf("%d%0*d%d ", i, n - a - 2, 0, j);
						count++;

					}

			if (count)
				count *= reverse2(a + 2, 0, n, 0, 0,1, A);

			total += count;
			count = 0;
			for (int i = A[a / 2]; i <= A[a / 2]; i++)
				for (int j = A[n - 1 - a / 2] ; j <= 9; j++)
					if (b + i + j <= 9 && (b + i + j) % 2 == 1)
					{
						//printf("%d%0*d%d ", i, n - a - 2, 0, j);
						count++;

					}

			if (count != 0)
				count *= reverse2(a + 2, 0, n, 0, 1, 1,A);
			total += count;


			//total = count;
			count = 0;

			/*if (a == 0) {

				for (int i = 1 - (a != 0); i <= A[a / 2 - 1]; i++)
					for (int j = 0; j <= 9; j++)
						if (b + i + j >= 10 && (b + i + j) % 2 == 1)
						{
							printf("\n%dx%d ", i, j);
							count++;
						}

				count2 = recherche(n - a, 1, 0, 0);
				if (count)
					count *= reverse(a + 2, 1, n, 1);

				total += count;
				count = 0;
				for (int i = A[a / 2]; i <= A[a / 2]; i++)
					for (int j = 0; j <= A[n - 1 - a / 2]; j++)
						if (b + i + j <= 9 && (b + i + j) % 2 == 1)
						{
							printf("%d%0*d%d ", i, n - a - 2, 0, j);
							count++;

						}

				int count2 = recherche(n - a, 0, 0, 0);
				if (count)
					count *= reverse2(a + 2, 0, n, 1, 0, A);
				total += count;
				count = 0;
				for (int i = A[a / 2]; i <= A[a / 2]; i++)
					for (int j = A[n - 1 - a / 2] + 1; j <= 9; j++)
						if (b + i + j <= 9 && (b + i + j) % 2 == 1)
						{
							printf("%d%0*d%d ", i, n - a - 2, 0, j);
							count++;

						}

				count2 = recherche(n - a, 0, 0, 0);
				if (count != 0)
					count *= reverse2(a + 2, 0, n, 1, 1, A);
				total += count;


			}*/

			total += count + (!d)*((b != 0) * (5) + 1 * ((b == 0)&(a != 0)));
		}
		else
		{




			if (a + 1 == n)
				if (b == 0) return 0; else return  ((A[a / 2]<5) ? A[a / 2]  : 5);
			else if (a == n)
				return 0;


			if (b == 1) {
				
				for (int i = 0; i <= A[a / 2] - 1; i++)
					for (int j = 0; j <= 9; j++)
						if (b + i + j <= 9 && (b + i + j) % 2 == 1)
						{
							//printf("%d%0*d%d ", i, n - a - 2, 0, j);
							if ((a==0|d)&(i*j!=0|a!=0))//count+= reverse2(a + 2, 0, n, 0, 2, 1, A);
												  //else 
								count++;



						}

				if (count)
					count *= reverse2(a + 2, 0, n, 1, 2, 1,A);
				//if (!d)           overflow=1
				//	count +=     reverse2(a, 0, n - 1, 1, 2, 0, A + 1); 

				
				
				total += count;
				count = 0;
				for (int i = A[a / 2]; i <= A[a / 2]; i++)
					for (int j=1-!!a; j < A[n - 1 - a / 2]; j++)
						if (b + i + j <= 9 && (b + i + j) % 2 == 1)
						{
							//printf("%d%0*d%d ", i, n - a - 2, 0, j);
							count++;

						}

				if (count)
					count *= reverse2(a + 2, 0, n, 1, 0,1, A);

				total += count;
				count = 0;
				for (int i = A[a / 2]; i <= A[a / 2]; i++)
					for (int j = A[n - 1 - a / 2] ; j <= 9; j++)
						if (b + i + j <= 9 && (b + i + j) % 2 == 1)
						{
							//printf("%d%0*d%d ", i, n - a - 2, 0, j);
							count++;

						}

				if (count != 0)
					count *= reverse2(a + 2, 0, n, 1, 1, 1,A);
				total += count;


				//total = count;
				count = 0;



			}
			else {




				for (int i = 0; i <= A[a / 2] - 1; i++)
					for (int j = 0; j <= 9; j++)
						if (b + i + j >= 10 && (b + i + j) % 2 == 1)
						{
							//printf("%d%0*d%d ", i, n - a - 2, 0, j);
							if ((a==0|d)&(i*j!=0|a!=0))//count+= reverse2(a + 2, 0, n, 0, 2, 1, A);
												  //else 
								count++;



						}

				if (count)
					count *= reverse2(a + 2, 1, n, 1, 2, 1, A );
				//if (!d)               overflow = 1
				//	count += reverse2(a, 1, n - 1, 1, 2, 0, A + 1);

				

				
				total += count;
				count = 0;
				for (int i = A[a / 2]; i <= A[a / 2]; i++)
					for (int j=1-!!a; j < A[n - 1 - a / 2]; j++)
						if (b + i + j >= 10 && (b + i + j) % 2 == 1)
						{
							//printf("%d%0*d%d ", i, n - a - 2, 0, j);
							count++;

						}

				if (count)
					count *= reverse2(a + 2, 1, n, 1, 0,1, A);
				total += count;
				count = 0;
				for (int i = A[a / 2]; i <= A[a / 2]; i++)
					for (int j = A[n - 1 - a / 2] ; j <= 9; j++)
						if (b + i + j >= 10 && (b + i + j) % 2 == 1)
						{
							//printf("%d%0*d%d ", i, n - a - 2, 0, j);
							count++;

						}

				if (count != 0)
					count *= reverse2(a + 2, 1, n, 1, 1, 1,A);
				total += count;
				count=0;


			}

			total += count + (!d)*(b != 0) * (5);

		}






	}
	//+1*(b==0)
	else
	{



		

		 total = 0, count = 0;
		if (l == 0) {

			if (a + 1 == n)
				if (b == 0) return !(d + !a); else;// _getch();
			else if (a == n)
				if (b == 0) return 1; else return 0;
			return reversemath(n - a,a,d,l);


			for (int i = 1-!!a; i <= 9; i++)
				for (int j = 1 - !!a; j <= 9; j++)
					if (b + i + j <= 9 && (b + i + j) % 2 == 1)
					{
						//printf("%d%0*d%d ", i, n - a - 2, 0, j);
						count++;

					}

			int count2 = 0;// recherche(n - a, 0, 0, 0);
			if(count)
			count *= reverse2(a + 2, 0, n, 0,2,d,A);
			if (count != count2)
				count = count;
			total = count;
			count = 0;

			if(a == 0&(n+1)%4==0) {

				for (int i = 0; i <= 9; i++)
					for (int j = 0; j <= 9; j++)
						if (b + i + j >= 10 && (b + i + j) % 2 == 1)
						{
							//printf("\n%dx%d ", i, j);
							count++;
						}

				count2 = 0;// recherche(n - a, 1, 0, 0);
				count *= reverse2(a + 2, 1, n, 1,2,d,A);
			}
			total += count+ (!d)*((b != 0) * (5) + 1 * ((b == 0)&(a != 0)));
		}
		else
		{




			if (a + 1 == n)
				if (b == 0) return 0; else return 5;
			else if (a == n)
				return 0;
			return reversemath(n - a,a,d,l);


			if (b == 1) {
				for (int i = 1-!!a; i <= 9; i++)
					for (int j = 1 - !!a; j <= 9; j++)
						if (b + i + j <= 9 && (b + i + j) % 2 == 1)
						{
							//printf("%d%0*d%d ", i, n - a - 2, 0, j);
							count++;

						}

				int count2 = 0; // recherche(n - a, 0, 0, 0);

				count *= reverse2(a + 2, 0, n, 1,2,d,A);
				if (count != count2)
					count = count;
				total = count;
				count = 0;

			}
			else {
				int count2;
				for (int i = 1 ; i <= 9; i++)
					for (int j = 0; j <= 9; j++)
						if (b + i + j >= 10 && (b + i + j) % 2 == 1)
						{
							//printf("\n%dx%d ", i, j);
							count++;
						}

				count2 = 0;// recherche(n - a, 1, 0, 0);
				count *= reverse2(a + 2, 1, n, 1,2,d,A);
			}

			total += count + (!d)*(b != 0) * (5);

		}

		//+1*(b==0)

		return total;



	}
	return total;

}




int main()
{


	int V[100];
	int b, a;
	scanf("%d", &b);

	for (int i = 1; i <= b; i++) {
		scanf("%d", &a);
		if(a!=1) a=a-1;
		int ff = accuracylog(a);

		for (int k = 0; k < ff; k++)
			V[ff - k - 1] = (int)(a / pow(10, k)) % 10;
		printf("%d\n", reverse2(0, 0, ff, 0, 0, 0, V));
	}
	return 0;

}
