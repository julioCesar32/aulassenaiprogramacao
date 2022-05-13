using System;
class Programa
{

    static void Main(string[] args)
    {
        Console.WriteLine("Atividade 02 - For");

        double investimento = 1000;
        int mes = 12;


        for (int i = 1; i <= mes; i++)
        {
            //investimento = investimento + investimento + 0.005;
            investimento += 1.005;
            Console.WriteLine("No mês " + i + " Você tem R$ " + investimento);
        }
        Console.WriteLine("Pressione ENTER para encerrar");
        Console.ReadLine();
    }
}
    
        
