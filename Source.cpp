#include "Home.h"
#include "MatchRepository.h"
#include "AreaRepository.h"
#include "PlayerRepository.h"
#include "SelectionRepository.h"
#include "MatchTestRepository.h"
#include "AreaTestRepository.h"
#include "PlayerTestRepository.h"
#include "SelectionTestRepository.h"

#include "MatchSqlRepository.h"

using namespace MySql::Data::MySqlClient;
using namespace SuperCampeones;

int main() {
	String^ connectionString = "datasource = localhost; port = 3306; username = root; password = root; database=super_champions";

	MatchRepository^ matchRepository = gcnew MatchSqlRepository(connectionString);
	AreaRepository^ areaRepository = gcnew AreaTestRepository();
	PlayerRepository^ playerRepository = gcnew PlayerTestRepository();
	SelectionRepository^ selectionRepository = gcnew SelectionTestRepository();

	Home^ home = gcnew Home(matchRepository);

	Application::Run(home);

	return 0;
}