#include <Windows.h>
#include <Wininet.h>

#include "wordlist.h"

struct balance
{
  float btc, eth, ltc, doge;
};

std::vector<std::string> websites = { "https://blockscan.com/", "https://etherscan.io/", "https://www.blockchain.com/explorer", "https://privatekeyfinder.io/mnemonic-converter", "https://mempool.space/", "https://live.blockcypher.com/ltc/", "https://dogechain.info/"};

std::string get_wallet_adress_from_mnemonic(std::string mnemonic);
std::string get_private_key_form_mnemonic(std::string mnemonic);

std::string read_url(std::string url);
DWORD post_request(std::string url, std::string request, DWORD* code, std::string* response);

DWORD check_wallet(std::string mnemonic, balance* wallet_balance);

bool is_empty(balance b);
