using System;

public class HelloWorld
{
    
        
    public static void Main(string[] args)
    {
        Console.WriteLine ("ATM");
        Console.WriteLine ("Register");
        Console.Write("Name: ");
        string username = Console.ReadLine();
        Console.Write("Password: ");
        string password = Console.ReadLine();
        
        
        for(int i = 5; i > 0; i++){
        Console.WriteLine ("Login");
        Console.Write("Name: ");
        string username1 = Console.ReadLine();
        Console.Write("Password: ");
        string password1 = Console.ReadLine();
        
        if((username,password)==(username1,password1))
        {
            Console.WriteLine ("Hello " + username1 + " What do yuo like to do?");
        
            break;
        }
        else{
           Console.WriteLine ("Wrong Usernmae or Password"); 
        }
        
        
        }
        
        
        }
            
    } 
