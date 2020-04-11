import java.util.*;

class Node
{
	int data;
	Node ptr=null;
}

class list
{
	Node head = null;
	Node current_node=null;
	void addnode(int data)
	{
		Node new_node = new Node();
		if(head==null)
		{
			head = new_node;
			new_node.data = data; 
		}
		else
		{
			current_node = head;
			while(current_node.ptr != null)
			{
				current_node = current_node.ptr;
			}
			current_node.ptr = new_node;
			current_node.data = data;
		}
	}

	void show()
	{
		if(head == null)
			System.out.println("list is empty");
		else
		{
			current_node = head;
			while(current_node.ptr != null)
			{
				System.out.println(current_node.data);
				current_node = current_node.ptr;
			}
		}
	}
}

class l_jav
{
	public static void main(String args[])
	{
		//Scanner sc = new Scanner(System.in);
		/*list llist = new list();
		while(true)
		{
			System.out.println("1.enter node");
			System.out.println("2.delete node");
			int ch = sc.nextInt();
			if(ch==1)
			{
				System.out.print("Enter data to add:");
				int data = sc.nextInt();
				llist.addnode(data);
				System.out.println("Data added succesfully");
			}
			else if(ch==2)
			{
				llist.show();
			}
			else if(ch==10)
				break;

		}*/

	int num;
	Scanner sc = new Scanner(System.in);
	num = sc.nextInt();
	int arr[] = new int[num];
	
	
	for(int i=0;i<num;i++)
	{
		arr[i] = sc.nextInt();
	}
	
	for(int i=0;i<num;i++)
	{
		System.out.println(arr[i]);
		

	}


	}
}