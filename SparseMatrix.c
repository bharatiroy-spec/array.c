#include<stdio.h>
int main(){
						int n,m;
						printf("Enter the no of row:");
						scanf("%d",&n);
						printf("Enter the no of column:");
						scanf("%d",&m);
						int mymatrix[n][m];
						
						printf("\nEnter the elements of the Sparse Matrix\n");
						for(int i=0;i<n;i++){
												for(int j=0;j<m;j++){
																	printf("The %d %d element is:",i,j);
																	scanf("%d",&mymatrix[i][j]);
																	}
										}
						printf("\n Non zero elements are(row,column,value):\n");
						int count=0;
						//printf("\nTraversing a Matrix(2D Array)\n");
						for(int i=0;i<n;i++){
												for(int j=0;j<m;j++){
														if(mymatrix[i][j] !=0){
																	printf("(%d %d)=%d\n",i,j,mymatrix[i][j]);
																	count++;
																	}
													}
											}
											printf("\nTotal non zero elements:%d\n",count);
											
											printf("\n Sparse Matrix Representation:\n");
											printf("Row Col Value\n");
											for(int i=0;i<n;i++){
													for(int j=0;j<m;j++){
															if(mymatrix[i][j] !=0){
																	printf("%d  %d  %d\n",i,j,mymatrix[i][j]);
																	
																	}
													}
											}
											
						return 0;
						}
