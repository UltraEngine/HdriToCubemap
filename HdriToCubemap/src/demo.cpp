#include "HdriToCubemap.hpp"

int main(int argc, const char* argv[])
{
    if (argc < 2)
    {
        printf("Arguments: filename [savedir] [exposure]");
        return 0;
    }
    if (argc > 3)
    {
        EXPOSURE = std::stof(argv[3]);
        if (EXPOSURE < 0.0)
        {
            printf("Invalid exposure");
            return 0;
        }
    }
    std::string savepath = "";
    if (argc > 2)
    {
        savepath = std::string(argv[2]);
    }
    HdriToCubemap<float> hdri2cubemap(argv[1], 0, true);
    hdri2cubemap.writeCubemap(savepath); //optionally, specify an output folder
}