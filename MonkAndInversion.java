package Hackerearth;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class MonkAndInversion {
    public static void main(String[] args) throws IOException {
        StringBuilder op=new StringBuilder("");
        BufferedReader bf=new BufferedReader(new InputStreamReader(System.in));
        int t= Integer.parseInt(bf.readLine());
        while(t-->0){
           int n =Integer.parseInt(bf.readLine());
           int[][] matrix=new int[n][n];
            for(int i=0;i<n;i++){
                String[] mat=bf.readLine().split(" ");
                for(int j=0;j<n;j++){
                    matrix[i][j]= Integer.parseInt(mat[j]);
                }
            }
            int count=0;
            for(int i=0;i<n;i++) {
                for (int j=0;j<n;j++) {
                    int temp=matrix[i][j];
                       for (int k=i;k<n;k++) {
                             for (int l=j;l<n;l++) {

                                    if(temp>matrix[k][l]) count++;

                                }
                    }
                }
            }
             op.append(count).append("\n");

        }
        System.out.println(op);

    }

}
