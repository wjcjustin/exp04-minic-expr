
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
      "T_ASSIGN", "T_COMMA", "T_ADD", "T_SUB", "T_MUL", "T_DIV", "T_MOD", 
      "T_RETURN", "T_INT", "T_VOID", "T_ID", "T_DIGIT", "T_OCT_DIGIT", "T_HEX_DIGIT", 
      "WS", "LINE_COMMENT", "BLOCK_COMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'('", "')'", "';'", "'{'", "'}'", "'='", "','", "'+'", "'-'", 
      "'*'", "'/'", "'%'", "'return'", "'int'", "'void'"
    },
    std::vector<std::string>{
      "", "T_L_PAREN", "T_R_PAREN", "T_SEMICOLON", "T_L_BRACE", "T_R_BRACE", 
      "T_ASSIGN", "T_COMMA", "T_ADD", "T_SUB", "T_MUL", "T_DIV", "T_MOD", 
      "T_RETURN", "T_INT", "T_VOID", "T_ID", "T_DIGIT", "T_OCT_DIGIT", "T_HEX_DIGIT", 
      "WS", "LINE_COMMENT", "BLOCK_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,22,161,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,
  	1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,15,1,15,5,15,88,8,15,10,
  	15,12,15,91,9,15,1,16,1,16,1,16,5,16,96,8,16,10,16,12,16,99,9,16,3,16,
  	101,8,16,1,17,1,17,1,17,1,17,5,17,107,8,17,10,17,12,17,110,9,17,3,17,
  	112,8,17,1,18,1,18,1,18,1,18,3,18,118,8,18,1,18,1,18,1,18,5,18,123,8,
  	18,10,18,12,18,126,9,18,3,18,128,8,18,1,19,4,19,131,8,19,11,19,12,19,
  	132,1,19,1,19,1,20,1,20,1,20,1,20,5,20,141,8,20,10,20,12,20,144,9,20,
  	1,20,1,20,1,21,1,21,1,21,1,21,5,21,152,8,21,10,21,12,21,155,9,21,1,21,
  	1,21,1,21,1,21,1,21,1,153,0,22,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,
  	9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,
  	21,43,22,1,0,10,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,
  	0,49,57,1,0,48,57,1,0,49,55,1,0,48,55,3,0,49,57,65,70,97,102,3,0,48,57,
  	65,70,97,102,3,0,9,10,13,13,32,32,2,0,10,10,13,13,171,0,1,1,0,0,0,0,3,
  	1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,
  	0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,
  	1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,
  	0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,1,45,1,0,0,0,
  	3,47,1,0,0,0,5,49,1,0,0,0,7,51,1,0,0,0,9,53,1,0,0,0,11,55,1,0,0,0,13,
  	57,1,0,0,0,15,59,1,0,0,0,17,61,1,0,0,0,19,63,1,0,0,0,21,65,1,0,0,0,23,
  	67,1,0,0,0,25,69,1,0,0,0,27,76,1,0,0,0,29,80,1,0,0,0,31,85,1,0,0,0,33,
  	100,1,0,0,0,35,102,1,0,0,0,37,117,1,0,0,0,39,130,1,0,0,0,41,136,1,0,0,
  	0,43,147,1,0,0,0,45,46,5,40,0,0,46,2,1,0,0,0,47,48,5,41,0,0,48,4,1,0,
  	0,0,49,50,5,59,0,0,50,6,1,0,0,0,51,52,5,123,0,0,52,8,1,0,0,0,53,54,5,
  	125,0,0,54,10,1,0,0,0,55,56,5,61,0,0,56,12,1,0,0,0,57,58,5,44,0,0,58,
  	14,1,0,0,0,59,60,5,43,0,0,60,16,1,0,0,0,61,62,5,45,0,0,62,18,1,0,0,0,
  	63,64,5,42,0,0,64,20,1,0,0,0,65,66,5,47,0,0,66,22,1,0,0,0,67,68,5,37,
  	0,0,68,24,1,0,0,0,69,70,5,114,0,0,70,71,5,101,0,0,71,72,5,116,0,0,72,
  	73,5,117,0,0,73,74,5,114,0,0,74,75,5,110,0,0,75,26,1,0,0,0,76,77,5,105,
  	0,0,77,78,5,110,0,0,78,79,5,116,0,0,79,28,1,0,0,0,80,81,5,118,0,0,81,
  	82,5,111,0,0,82,83,5,105,0,0,83,84,5,100,0,0,84,30,1,0,0,0,85,89,7,0,
  	0,0,86,88,7,1,0,0,87,86,1,0,0,0,88,91,1,0,0,0,89,87,1,0,0,0,89,90,1,0,
  	0,0,90,32,1,0,0,0,91,89,1,0,0,0,92,101,5,48,0,0,93,97,7,2,0,0,94,96,7,
  	3,0,0,95,94,1,0,0,0,96,99,1,0,0,0,97,95,1,0,0,0,97,98,1,0,0,0,98,101,
  	1,0,0,0,99,97,1,0,0,0,100,92,1,0,0,0,100,93,1,0,0,0,101,34,1,0,0,0,102,
  	111,5,48,0,0,103,112,5,48,0,0,104,108,7,4,0,0,105,107,7,5,0,0,106,105,
  	1,0,0,0,107,110,1,0,0,0,108,106,1,0,0,0,108,109,1,0,0,0,109,112,1,0,0,
  	0,110,108,1,0,0,0,111,103,1,0,0,0,111,104,1,0,0,0,112,36,1,0,0,0,113,
  	114,5,48,0,0,114,118,5,120,0,0,115,116,5,48,0,0,116,118,5,88,0,0,117,
  	113,1,0,0,0,117,115,1,0,0,0,118,127,1,0,0,0,119,128,5,48,0,0,120,124,
  	7,6,0,0,121,123,7,7,0,0,122,121,1,0,0,0,123,126,1,0,0,0,124,122,1,0,0,
  	0,124,125,1,0,0,0,125,128,1,0,0,0,126,124,1,0,0,0,127,119,1,0,0,0,127,
  	120,1,0,0,0,128,38,1,0,0,0,129,131,7,8,0,0,130,129,1,0,0,0,131,132,1,
  	0,0,0,132,130,1,0,0,0,132,133,1,0,0,0,133,134,1,0,0,0,134,135,6,19,0,
  	0,135,40,1,0,0,0,136,137,5,47,0,0,137,138,5,47,0,0,138,142,1,0,0,0,139,
  	141,8,9,0,0,140,139,1,0,0,0,141,144,1,0,0,0,142,140,1,0,0,0,142,143,1,
  	0,0,0,143,145,1,0,0,0,144,142,1,0,0,0,145,146,6,20,1,0,146,42,1,0,0,0,
  	147,148,5,47,0,0,148,149,5,42,0,0,149,153,1,0,0,0,150,152,9,0,0,0,151,
  	150,1,0,0,0,152,155,1,0,0,0,153,154,1,0,0,0,153,151,1,0,0,0,154,156,1,
  	0,0,0,155,153,1,0,0,0,156,157,5,42,0,0,157,158,5,47,0,0,158,159,1,0,0,
  	0,159,160,6,21,1,0,160,44,1,0,0,0,12,0,89,97,100,108,111,117,124,127,
  	132,142,153,2,6,0,0,0,1,0
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
