class Programa
{

    static void Main(string[] args)
    {
        Console.WriteLine("Atividade 01 ");

        double n1, n2, n3, n4, res;

        res = n1 = n2 = n3 = n4 = 0;

        Console.WriteLine("Digite a nota 1: ");
        n1 = double.Parse(Console.ReadLine());

        Console.WriteLine("Digite a nota 2: ");
        n2 = double.Parse(Console.ReadLine());

        Console.WriteLine("Digite a nota 3: ");
        n3 = double.Parse(Console.ReadLine());

        Console.WriteLine("Digite a nota 4: ");
        n4 = double.Parse(Console.ReadLine());


        res = n1 + n2 + n3 + n4;
        double media = (n1 + n2 + n3 + n4) / 4;

        bool aprovado = media >= 6;
        bool recuperacao = media == 5;

        Console.WriteLine(" soma das notas é: " + res);
        Console.WriteLine("A média das notas é: " + media);

        if(aprovado)
        {
            Console.WriteLine("Parabéns, o aluno foi aprovado :D");
        }
        else if(recuperacao)
        {
            Console.WriteLine("O aluno ficou de recuperação");
        }
        else
        {
            Console.WriteLine("O aluno foi reprovado :(");
        }

        Console.WriteLine("Pressione ENTER para encerrar");
        Console.ReadLine();
    }
}