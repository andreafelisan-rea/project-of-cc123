using System;

public class HelloWorld
{
    
        
    public static void Main(string[] args)
    {
        Console.WriteLine ("ATM");
        Console.WriteLine ();
        Console.WriteLine ("Register");
        Console.Write("Name: ");
        string username = Console.ReadLine();
        Console.Write("Password: ");
        string password = Console.ReadLine();
        
        Console.WriteLine ();
        
        for(int i = 5; i > 0; i++){
        Console.WriteLine ("Login");
        Console.Write("Name: ");
        string username1 = Console.ReadLine();
        Console.Write("Password: ");
        string password1 = Console.ReadLine();
        
        if((username,password)==(username1,password1))
        {
            int money=0;
            Console.WriteLine ();
            Console.WriteLine ("Hello " + username1 + " What do you like to do?");
            Console.WriteLine ("Amount of Money: "+ money);
            Console.WriteLine ();
            Console.WriteLine ("1 to withdraw or 2 to deposit or 3 ");
            break;
        }
        else{
           Console.WriteLine ("Wrong Usernmae or Password"); 
        }
        
        
        }
        
        
        }
            
    } 
        
