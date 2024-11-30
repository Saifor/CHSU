using SaiClassLibrary;

while (true)
{
    Console.WriteLine("Введите текст");
    Console.WriteLine(BarcodeHelper.GetCode(Console.ReadLine()));
}
