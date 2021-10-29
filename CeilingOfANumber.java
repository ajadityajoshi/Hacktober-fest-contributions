package Leetcode;

public class CeilingOfANumber {
    public static void main(String[] args) {
        int[] arr={4,5,6,19,28,39,55,62,93,96,100,102};
        int index=ceiling(arr,27);
        int flor=flooring(arr,27);

        if(index!=-1 && flor!=-1){System.out.println("Ceiling= "+arr[index]+" and flooring="+arr[flor]);}
        else{ System.out.println("index of ceiling = "+index+" and index of flooring = "+flor); }
    }
    static int ceiling(int[] arr,int target){
        int n=arr.length;
        if(n==0) return -1;
        int start=0;
        int end=n-1;
        int result=-1;
        while(start<=end){
            int mid=end-(end-start)/2;
            if(arr[mid]>=target){
                result=mid;
                end=mid-1;
            }
            else if(arr[mid]<target){
                start=mid+1;
            }
        }
        return result;
    }
    public static int flooring(int[] arr , int target){
        int result=-1;
        int start =0;
        int end=arr.length-1;

        while(start<=end){
            int mid =end-(end-start)/2;
            if(arr[mid]>target){
                end=mid-1;
            }
            else if(arr[mid]<=target){
                result=mid;
                start=mid+1;
            }
        }
        return result;
    }
}
