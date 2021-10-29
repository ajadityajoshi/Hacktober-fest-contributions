package Tree;

import java.util.Scanner;

class Node
{
    int data;
    Node left;
    Node right;
    Node(int data){this.data=data;}
    Node(){}
}

public class Tree {
        static Scanner scanner=null;

    public static void main(String[] args) {
        scanner=new Scanner(System.in);
        Node T1=createTree();
        System.out.println("preorder");
        preorder(T1);
        System.out.println("postorder");
        postorder(T1);
        System.out.println("inorder");
        inorder(T1);

    }
     static Node createTree(){
        Node root=null;
         System.out.println("Enter Data :");
         int data=scanner.nextInt();
         if(data==-1) return null;
         root=new Node(data);
         System.out.println("Enter the left node of "+data);
         root.left=createTree();
         System.out.println("Enter the right node of "+data);
         root.right=createTree();
        return root;
     }
     static void preorder(Node root){
        if(root==null) return;
         System.out.println(root.data);
         preorder(root.left);
         preorder(root.right);

     }
     static void postorder(Node root){
        if(root==null) return;
        postorder(root.left);
        postorder(root.right);
         System.out.println(root.data);

     }
     static void inorder(Node root){
        if(root==null) return;
         inorder(root.left);
         System.out.println(root.data);
         inorder(root.right);

     }

}
