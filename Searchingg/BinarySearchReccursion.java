package Searchingg;

public class BinarySearchReccursion {
    static int BinSrch(int[] arr,int value,int start,int end){
        int mid=end-(end-start)/2;
        if(arr[mid]==value){
            return mid;
        }
        else if(value>arr[mid]) return BinSrch(arr,value,mid,end);
        else if(value<arr[mid]) return BinSrch(arr,value,start,mid);
        else return -1;
    }
    static boolean palidrome(String s){
        String temp=" "+s+" ";
        int len=temp.length();
        if(s.length()==2 && s.charAt(0)==s.charAt(1)) return true;
        if(len<=3) return  true;
        else{
            if(s.charAt(1)==s.charAt(len-2)) return palidrome(temp.substring(2,len-3));
            else return false  ;
        }
    }
    public static void main(String[] args) {

        int[] heights={23,34,56,67,78,89,90,100,108,128};
        //             0  1  2  3  4  5  6  7    8   9
        int indecx=BinSrch(heights,101,0,10);
        //System.out.println(indecx);
        String Name="AADAA";
        System.out.println(palidrome(Name));
    }
}
