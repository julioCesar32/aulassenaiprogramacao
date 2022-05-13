class Programa
{

    static void Main(string[] args)
    {
        Console.WriteLine("Projeto 08 - Condicionais 2");

        int idadeRafael = 17;
        int quantidadedePessoas = 2;

        bool acompanhado = quantidadedePessoas > 1; 

        bool grupo = false;

        if (idadeRafael >= 18 || acompanhado)
        {
            Console.WriteLine("Pode entrar!");
        }

        else
        {
            Console.WriteLine("Não pode entrar");
        }
        Console.WriteLine("Pressione ENTER para encerrar");
        Console.ReadLine();
    }
}