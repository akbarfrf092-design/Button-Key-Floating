#include <mod/amlmod.h>
#include <mod/logger.h>

MYMOD(
    net.akbar.buttonkeyfloating,
    Button Key Floating,
    0.1,
    Akbar
)

ON_MOD_LOAD()
{
    logger->Info("Button Key Floating v0.1 loaded!");
    logger->Info("AML plugin initialization successful.");
}
