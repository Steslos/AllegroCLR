namespace Steslos.AllegroClr.Sandbox
{
    internal static class Program
    {
        public static void Main(string[] args)
        {
            Al.InstallSystem();
            var display = Al.CreateDisplay(1280, 720);

            Al.ClearToColor(Al.MapRgb(64, 128, 255));
            Al.FlipDisplay();
            Al.Rest(3);

            Al.DestroyDisplay(display);
            Al.UninstallSystem();
        }
    }
}
