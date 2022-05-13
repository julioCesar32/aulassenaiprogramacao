using System;
class programa
{
    static void Main(string[] args)
    {
        Console.WriteLine("Projeto 11 - Investindo a longo Prazo");

        double fatordeRendimento = 1.005;
        double investimento = 1000;
        int anos = 5;

        for(int i = 1; i <= 5; i++)
        {
            Console.WriteLine("***** ANO " + i + "*****");
            for (int mes = 1; mes <= 12; mes++)
            {
                investimento *= fatordeRendimento;
                Console.WriteLine("No mes " + mes + " Você tem R$ " + Math.Floor(investimento));
            }
            fatordeRendimento += 0.001;
        }
        Console.WriteLine("Depois " + anos + " Você terá R$ " + Math.Floor(investimento));

        Console.WriteLine("Pressione ENTER para encerrar");
        Console.ReadLine();
    }
}
