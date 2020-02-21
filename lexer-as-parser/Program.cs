﻿// Template generated code from Antlr4BuildTasks.Template v 2.1
namespace lexer_as_parser
{
    using Antlr4.Runtime;

    public class Program
    {
        static void Try(string input)
        {
            var str = new AntlrInputStream(input);
            var lexer = new arithmeticLexer(str);
            var tokens = new CommonTokenStream(lexer);
            var parser = new arithmeticParser(tokens);
            var listener = new ErrorListener<IToken>(parser, lexer, tokens);
            parser.AddErrorListener(listener);
            var tree = parser.file();
            if (listener.had_error)
            {
                System.Console.WriteLine("error in parse.");
            }
            else
            {
                System.Console.WriteLine("parse completed.");
            }
            System.Console.WriteLine(tokens.OutputTokens());
            System.Console.WriteLine(tree.OutputTree(tokens));
        }

        static void Main(string[] args)
        {
            Try(" 1 + 2 * 3 ; 1; hi");
        }
    }
}
