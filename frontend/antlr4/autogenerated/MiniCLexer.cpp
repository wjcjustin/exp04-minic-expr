
// Generated from MiniC.g4 by ANTLR 4.12.0


#include "MiniCLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct MiniCLexerStaticData final {
  MiniCLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MiniCLexerStaticData(const MiniCLexerStaticData&) = delete;
  MiniCLexerStaticData(MiniCLexerStaticData&&) = delete;
  MiniCLexerStaticData& operator=(const MiniCLexerStaticData&) = delete;
  MiniCLexerStaticData& operator=(MiniCLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag miniclexerLexerOnceFlag;
MiniCLexerStaticData *miniclexerLexerStaticData = nullptr;

void miniclexerLexerInitialize() {
  assert(miniclexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<MiniCLexerStaticData>(
    std::vector<std::string>{
      "T_L_PAREN", "T_R_PAREN", "T_SEMICOLON", "T_L_BRACE", "T_R_BRACE", 
      "T_ASSIGN", "T_COMMA", "T_ADD", "T_SUB", "T_RETURN", "T_INT", "T_VOID", 
      "T_ID", "T_DIGIT", "T_OCT_DIGIT", "T_HEX_DIGIT", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'('", "')'", "';'", "'{'", "'}'", "'='", "','", "'+'", "'-'", 
      "'return'", "'int'", "'void'"
    },
    std::vector<std::string>{
      "", "T_L_PAREN", "T_R_PAREN", "T_SEMICOLON", "T_L_BRACE", "T_R_BRACE", 
      "T_ASSIGN", "T_COMMA", "T_ADD", "T_SUB", "T_RETURN", "T_INT", "T_VOID", 
      "T_ID", "T_DIGIT", "T_OCT_DIGIT", "T_HEX_DIGIT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,17,120,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,
  	1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,
  	1,10,1,11,1,11,1,11,1,11,1,11,1,12,1,12,5,12,72,8,12,10,12,12,12,75,9,
  	12,1,13,1,13,1,13,5,13,80,8,13,10,13,12,13,83,9,13,3,13,85,8,13,1,14,
  	1,14,1,14,1,14,5,14,91,8,14,10,14,12,14,94,9,14,3,14,96,8,14,1,15,1,15,
  	1,15,1,15,3,15,102,8,15,1,15,1,15,1,15,5,15,107,8,15,10,15,12,15,110,
  	9,15,3,15,112,8,15,1,16,4,16,115,8,16,11,16,12,16,116,1,16,1,16,0,0,17,
  	1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,
  	29,15,31,16,33,17,1,0,9,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,
  	97,122,1,0,49,57,1,0,48,57,1,0,49,55,1,0,48,55,3,0,49,57,65,70,97,102,
  	3,0,48,57,65,70,97,102,3,0,9,10,13,13,32,32,128,0,1,1,0,0,0,0,3,1,0,0,
  	0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,
  	1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,
  	0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,1,35,1,0,0,0,
  	3,37,1,0,0,0,5,39,1,0,0,0,7,41,1,0,0,0,9,43,1,0,0,0,11,45,1,0,0,0,13,
  	47,1,0,0,0,15,49,1,0,0,0,17,51,1,0,0,0,19,53,1,0,0,0,21,60,1,0,0,0,23,
  	64,1,0,0,0,25,69,1,0,0,0,27,84,1,0,0,0,29,86,1,0,0,0,31,101,1,0,0,0,33,
  	114,1,0,0,0,35,36,5,40,0,0,36,2,1,0,0,0,37,38,5,41,0,0,38,4,1,0,0,0,39,
  	40,5,59,0,0,40,6,1,0,0,0,41,42,5,123,0,0,42,8,1,0,0,0,43,44,5,125,0,0,
  	44,10,1,0,0,0,45,46,5,61,0,0,46,12,1,0,0,0,47,48,5,44,0,0,48,14,1,0,0,
  	0,49,50,5,43,0,0,50,16,1,0,0,0,51,52,5,45,0,0,52,18,1,0,0,0,53,54,5,114,
  	0,0,54,55,5,101,0,0,55,56,5,116,0,0,56,57,5,117,0,0,57,58,5,114,0,0,58,
  	59,5,110,0,0,59,20,1,0,0,0,60,61,5,105,0,0,61,62,5,110,0,0,62,63,5,116,
  	0,0,63,22,1,0,0,0,64,65,5,118,0,0,65,66,5,111,0,0,66,67,5,105,0,0,67,
  	68,5,100,0,0,68,24,1,0,0,0,69,73,7,0,0,0,70,72,7,1,0,0,71,70,1,0,0,0,
  	72,75,1,0,0,0,73,71,1,0,0,0,73,74,1,0,0,0,74,26,1,0,0,0,75,73,1,0,0,0,
  	76,85,5,48,0,0,77,81,7,2,0,0,78,80,7,3,0,0,79,78,1,0,0,0,80,83,1,0,0,
  	0,81,79,1,0,0,0,81,82,1,0,0,0,82,85,1,0,0,0,83,81,1,0,0,0,84,76,1,0,0,
  	0,84,77,1,0,0,0,85,28,1,0,0,0,86,95,5,48,0,0,87,96,5,48,0,0,88,92,7,4,
  	0,0,89,91,7,5,0,0,90,89,1,0,0,0,91,94,1,0,0,0,92,90,1,0,0,0,92,93,1,0,
  	0,0,93,96,1,0,0,0,94,92,1,0,0,0,95,87,1,0,0,0,95,88,1,0,0,0,96,30,1,0,
  	0,0,97,98,5,48,0,0,98,102,5,120,0,0,99,100,5,48,0,0,100,102,5,88,0,0,
  	101,97,1,0,0,0,101,99,1,0,0,0,102,111,1,0,0,0,103,112,5,48,0,0,104,108,
  	7,6,0,0,105,107,7,7,0,0,106,105,1,0,0,0,107,110,1,0,0,0,108,106,1,0,0,
  	0,108,109,1,0,0,0,109,112,1,0,0,0,110,108,1,0,0,0,111,103,1,0,0,0,111,
  	104,1,0,0,0,112,32,1,0,0,0,113,115,7,8,0,0,114,113,1,0,0,0,115,116,1,
  	0,0,0,116,114,1,0,0,0,116,117,1,0,0,0,117,118,1,0,0,0,118,119,6,16,0,
  	0,119,34,1,0,0,0,10,0,73,81,84,92,95,101,108,111,116,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  miniclexerLexerStaticData = staticData.release();
}

}

MiniCLexer::MiniCLexer(CharStream *input) : Lexer(input) {
  MiniCLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *miniclexerLexerStaticData->atn, miniclexerLexerStaticData->decisionToDFA, miniclexerLexerStaticData->sharedContextCache);
}

MiniCLexer::~MiniCLexer() {
  delete _interpreter;
}

std::string MiniCLexer::getGrammarFileName() const {
  return "MiniC.g4";
}

const std::vector<std::string>& MiniCLexer::getRuleNames() const {
  return miniclexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& MiniCLexer::getChannelNames() const {
  return miniclexerLexerStaticData->channelNames;
}

const std::vector<std::string>& MiniCLexer::getModeNames() const {
  return miniclexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& MiniCLexer::getVocabulary() const {
  return miniclexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MiniCLexer::getSerializedATN() const {
  return miniclexerLexerStaticData->serializedATN;
}

const atn::ATN& MiniCLexer::getATN() const {
  return *miniclexerLexerStaticData->atn;
}




void MiniCLexer::initialize() {
  ::antlr4::internal::call_once(miniclexerLexerOnceFlag, miniclexerLexerInitialize);
}
