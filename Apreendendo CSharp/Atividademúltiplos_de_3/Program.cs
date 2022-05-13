using System;
class Programa
{

    static void Main(string[] args)
    {
        Console.WriteLine("Atividade 03 - Multiplos de 3");

        //for(int i = 0; i < 100; i += 3)
        //{
            //Console.WriteLine(i); 
        //}

        for(int i = 0; i < 100; i++)
        {
            if(i % 3 == 0)
            {
                Console.WriteLine(i);
            }
        }

        Console.WriteLine("Pressione ENTER para encerrar");
        Console.ReadLine();
    }
}