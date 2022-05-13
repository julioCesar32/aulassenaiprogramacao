using System;
class Programa
{
    static void Main(string[] args)
    {
        Console.WriteLine("Projeto 05 - Caracteres e Textos");

        char letra = 'A';

        letra = (char)74;
        Console.WriteLine(letra);
        letra = (char)117;
        Console.WriteLine(letra);
        letra = (char)108;
        Console.WriteLine(letra);
        letra = (char)105;
        Console.WriteLine(letra);
        letra = (char)111;
        Console.WriteLine(letra);

        letra = (char)74;
        Console.Write(letra);
        letra = (char)117;
        Console.Write(letra);
        letra = (char)108;
        Console.Write(letra);
        letra = (char)105;
        Console.Write(letra);
        letra = (char)111;
        Console.WriteLine(letra);

        string primeriaFrase = "SENAi - Cursos de Tecnologia ";
        Console.WriteLine(primeriaFrase + 2022);

        string vazia = "";
        Console.WriteLine(vazia);

        letra = ' ';

        string cursos = @"Cursos Disponíveis: 
            -C
            -C++  
            -CSHarp  
            -HTML";
        Console.WriteLine(cursos);

        Console.WriteLine("Pressione ENTER para encerrar"); 
        Console.ReadLine();
    }
}