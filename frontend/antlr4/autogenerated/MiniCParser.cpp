
// Generated from MiniC.g4 by ANTLR 4.12.0


#include "MiniCVisitor.h"

#include "MiniCParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MiniCParserStaticData final {
  MiniCParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MiniCParserStaticData(const MiniCParserStaticData&) = delete;
  MiniCParserStaticData(MiniCParserStaticData&&) = delete;
  MiniCParserStaticData& operator=(const MiniCParserStaticData&) = delete;
  MiniCParserStaticData& operator=(MiniCParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag minicParserOnceFlag;
MiniCParserStaticData *minicParserStaticData = nullptr;

void minicParserInitialize() {
  assert(minicParserStaticData == nullptr);
  auto staticData = std::make_unique<MiniCParserStaticData>(
    std::vector<std::string>{
      "compileUnit", "funcDef", "formalParamList", "formalParam", "block", 
      "blockItemList", "blockItem", "varDecl", "varAndInit", "basicType", 
      "varDef", "arrDef", "statement", "ifelseExpr", "cond", "whileExpr", 
      "expr", "arithmeticExp", "relationalBinaryExp", "logicBinaryExp", 
      "logicAndExp", "addExp", "mulExp", "addOp", "mulOp", "relationalBinaryOp", 
      "logicBinaryOp", "normalUnaryExp", "unaryOp", "unaryExp", "primaryExp", 
      "realParamList", "lVal"
    },
    std::vector<std::string>{
      "", "'('", "')'", "';'", "'{'", "'}'", "'['", "']'", "'='", "','", 
      "'+'", "'-'", "'*'", "'/'", "'%'", "'&&'", "'||'", "'!'", "'=='", 
      "'!='", "'>'", "'<'", "'>='", "'<='", "'return'", "'int'", "'void'", 
      "'if'", "'else'", "'while'", "'break'", "'continue'"
    },
    std::vector<std::string>{
      "", "T_L_PAREN", "T_R_PAREN", "T_SEMICOLON", "T_L_BRACE", "T_R_BRACE", 
      "T_L_SQUARE_BRACKTE", "T_R_SQUARE_BRACKTE", "T_ASSIGN", "T_COMMA", 
      "T_ADD", "T_SUB", "T_MUL", "T_DIV", "T_MOD", "T_AND", "T_OR", "T_NOT", 
      "T_EQUAL", "T_NOT_EQUAL", "T_GREATER", "T_LESSER", "T_GREATER_EQUAL", 
      "T_LESSER_EQUAL", "T_RETURN", "T_INT", "T_VOID", "T_IF", "T_ELSE", 
      "T_WHILE", "T_BREAK", "T_CONTINUE", "T_ID", "T_DIGIT", "T_OCT_DIGIT", 
      "T_HEX_DIGIT", "WS", "LINE_COMMENT", "BLOCK_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,38,274,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,1,0,1,0,5,0,69,8,0,10,0,12,
  	0,72,9,0,1,0,1,0,1,1,1,1,1,1,1,1,3,1,80,8,1,1,1,1,1,1,1,1,2,1,2,1,2,5,
  	2,88,8,2,10,2,12,2,91,9,2,1,3,1,3,1,3,1,4,1,4,3,4,98,8,4,1,4,1,4,1,5,
  	4,5,103,8,5,11,5,12,5,104,1,6,1,6,3,6,109,8,6,1,7,1,7,1,7,1,7,5,7,115,
  	8,7,10,7,12,7,118,9,7,1,7,1,7,1,8,1,8,1,8,3,8,125,8,8,1,8,3,8,128,8,8,
  	1,9,1,9,1,10,1,10,1,11,1,11,1,11,1,11,4,11,138,8,11,11,11,12,11,139,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,153,8,12,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,162,8,12,1,13,1,13,1,13,1,13,1,
  	13,1,13,1,13,3,13,171,8,13,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,
  	16,1,16,1,17,1,17,1,18,1,18,1,18,1,18,5,18,189,8,18,10,18,12,18,192,9,
  	18,1,19,1,19,1,19,5,19,197,8,19,10,19,12,19,200,9,19,1,20,1,20,1,20,5,
  	20,205,8,20,10,20,12,20,208,9,20,1,21,1,21,1,21,1,21,5,21,214,8,21,10,
  	21,12,21,217,9,21,1,22,1,22,1,22,1,22,5,22,223,8,22,10,22,12,22,226,9,
  	22,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,27,1,28,1,28,1,
  	29,1,29,1,29,1,29,1,29,3,29,246,8,29,1,29,1,29,3,29,250,8,29,1,30,1,30,
  	1,30,1,30,1,30,1,30,1,30,1,30,3,30,260,8,30,1,31,1,31,1,31,5,31,265,8,
  	31,10,31,12,31,268,9,31,1,32,1,32,3,32,272,8,32,1,32,0,0,33,0,2,4,6,8,
  	10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,
  	56,58,60,62,64,0,6,1,0,25,26,1,0,10,11,1,0,12,14,1,0,18,23,1,0,15,16,
  	2,0,11,11,17,17,275,0,70,1,0,0,0,2,75,1,0,0,0,4,84,1,0,0,0,6,92,1,0,0,
  	0,8,95,1,0,0,0,10,102,1,0,0,0,12,108,1,0,0,0,14,110,1,0,0,0,16,127,1,
  	0,0,0,18,129,1,0,0,0,20,131,1,0,0,0,22,133,1,0,0,0,24,161,1,0,0,0,26,
  	163,1,0,0,0,28,172,1,0,0,0,30,174,1,0,0,0,32,180,1,0,0,0,34,182,1,0,0,
  	0,36,184,1,0,0,0,38,193,1,0,0,0,40,201,1,0,0,0,42,209,1,0,0,0,44,218,
  	1,0,0,0,46,227,1,0,0,0,48,229,1,0,0,0,50,231,1,0,0,0,52,233,1,0,0,0,54,
  	235,1,0,0,0,56,238,1,0,0,0,58,249,1,0,0,0,60,259,1,0,0,0,62,261,1,0,0,
  	0,64,271,1,0,0,0,66,69,3,2,1,0,67,69,3,14,7,0,68,66,1,0,0,0,68,67,1,0,
  	0,0,69,72,1,0,0,0,70,68,1,0,0,0,70,71,1,0,0,0,71,73,1,0,0,0,72,70,1,0,
  	0,0,73,74,5,0,0,1,74,1,1,0,0,0,75,76,3,18,9,0,76,77,5,32,0,0,77,79,5,
  	1,0,0,78,80,3,4,2,0,79,78,1,0,0,0,79,80,1,0,0,0,80,81,1,0,0,0,81,82,5,
  	2,0,0,82,83,3,8,4,0,83,3,1,0,0,0,84,89,3,6,3,0,85,86,5,9,0,0,86,88,3,
  	6,3,0,87,85,1,0,0,0,88,91,1,0,0,0,89,87,1,0,0,0,89,90,1,0,0,0,90,5,1,
  	0,0,0,91,89,1,0,0,0,92,93,3,18,9,0,93,94,3,20,10,0,94,7,1,0,0,0,95,97,
  	5,4,0,0,96,98,3,10,5,0,97,96,1,0,0,0,97,98,1,0,0,0,98,99,1,0,0,0,99,100,
  	5,5,0,0,100,9,1,0,0,0,101,103,3,12,6,0,102,101,1,0,0,0,103,104,1,0,0,
  	0,104,102,1,0,0,0,104,105,1,0,0,0,105,11,1,0,0,0,106,109,3,24,12,0,107,
  	109,3,14,7,0,108,106,1,0,0,0,108,107,1,0,0,0,109,13,1,0,0,0,110,111,3,
  	18,9,0,111,116,3,16,8,0,112,113,5,9,0,0,113,115,3,16,8,0,114,112,1,0,
  	0,0,115,118,1,0,0,0,116,114,1,0,0,0,116,117,1,0,0,0,117,119,1,0,0,0,118,
  	116,1,0,0,0,119,120,5,3,0,0,120,15,1,0,0,0,121,124,3,20,10,0,122,123,
  	5,8,0,0,123,125,3,32,16,0,124,122,1,0,0,0,124,125,1,0,0,0,125,128,1,0,
  	0,0,126,128,3,22,11,0,127,121,1,0,0,0,127,126,1,0,0,0,128,17,1,0,0,0,
  	129,130,7,0,0,0,130,19,1,0,0,0,131,132,5,32,0,0,132,21,1,0,0,0,133,137,
  	5,32,0,0,134,135,5,6,0,0,135,136,5,33,0,0,136,138,5,7,0,0,137,134,1,0,
  	0,0,138,139,1,0,0,0,139,137,1,0,0,0,139,140,1,0,0,0,140,23,1,0,0,0,141,
  	142,5,24,0,0,142,143,3,32,16,0,143,144,5,3,0,0,144,162,1,0,0,0,145,146,
  	3,64,32,0,146,147,5,8,0,0,147,148,3,32,16,0,148,149,5,3,0,0,149,162,1,
  	0,0,0,150,162,3,8,4,0,151,153,3,32,16,0,152,151,1,0,0,0,152,153,1,0,0,
  	0,153,154,1,0,0,0,154,162,5,3,0,0,155,162,3,26,13,0,156,162,3,30,15,0,
  	157,158,5,30,0,0,158,162,5,3,0,0,159,160,5,31,0,0,160,162,5,3,0,0,161,
  	141,1,0,0,0,161,145,1,0,0,0,161,150,1,0,0,0,161,152,1,0,0,0,161,155,1,
  	0,0,0,161,156,1,0,0,0,161,157,1,0,0,0,161,159,1,0,0,0,162,25,1,0,0,0,
  	163,164,5,27,0,0,164,165,5,1,0,0,165,166,3,28,14,0,166,167,5,2,0,0,167,
  	170,3,24,12,0,168,169,5,28,0,0,169,171,3,24,12,0,170,168,1,0,0,0,170,
  	171,1,0,0,0,171,27,1,0,0,0,172,173,3,32,16,0,173,29,1,0,0,0,174,175,5,
  	29,0,0,175,176,5,1,0,0,176,177,3,28,14,0,177,178,5,2,0,0,178,179,3,24,
  	12,0,179,31,1,0,0,0,180,181,3,38,19,0,181,33,1,0,0,0,182,183,3,42,21,
  	0,183,35,1,0,0,0,184,190,3,34,17,0,185,186,3,50,25,0,186,187,3,34,17,
  	0,187,189,1,0,0,0,188,185,1,0,0,0,189,192,1,0,0,0,190,188,1,0,0,0,190,
  	191,1,0,0,0,191,37,1,0,0,0,192,190,1,0,0,0,193,198,3,40,20,0,194,195,
  	5,16,0,0,195,197,3,40,20,0,196,194,1,0,0,0,197,200,1,0,0,0,198,196,1,
  	0,0,0,198,199,1,0,0,0,199,39,1,0,0,0,200,198,1,0,0,0,201,206,3,36,18,
  	0,202,203,5,15,0,0,203,205,3,36,18,0,204,202,1,0,0,0,205,208,1,0,0,0,
  	206,204,1,0,0,0,206,207,1,0,0,0,207,41,1,0,0,0,208,206,1,0,0,0,209,215,
  	3,44,22,0,210,211,3,46,23,0,211,212,3,44,22,0,212,214,1,0,0,0,213,210,
  	1,0,0,0,214,217,1,0,0,0,215,213,1,0,0,0,215,216,1,0,0,0,216,43,1,0,0,
  	0,217,215,1,0,0,0,218,224,3,58,29,0,219,220,3,48,24,0,220,221,3,58,29,
  	0,221,223,1,0,0,0,222,219,1,0,0,0,223,226,1,0,0,0,224,222,1,0,0,0,224,
  	225,1,0,0,0,225,45,1,0,0,0,226,224,1,0,0,0,227,228,7,1,0,0,228,47,1,0,
  	0,0,229,230,7,2,0,0,230,49,1,0,0,0,231,232,7,3,0,0,232,51,1,0,0,0,233,
  	234,7,4,0,0,234,53,1,0,0,0,235,236,3,56,28,0,236,237,3,58,29,0,237,55,
  	1,0,0,0,238,239,7,5,0,0,239,57,1,0,0,0,240,250,3,22,11,0,241,250,3,60,
  	30,0,242,243,5,32,0,0,243,245,5,1,0,0,244,246,3,62,31,0,245,244,1,0,0,
  	0,245,246,1,0,0,0,246,247,1,0,0,0,247,250,5,2,0,0,248,250,3,54,27,0,249,
  	240,1,0,0,0,249,241,1,0,0,0,249,242,1,0,0,0,249,248,1,0,0,0,250,59,1,
  	0,0,0,251,252,5,1,0,0,252,253,3,32,16,0,253,254,5,2,0,0,254,260,1,0,0,
  	0,255,260,5,33,0,0,256,260,5,34,0,0,257,260,5,35,0,0,258,260,3,64,32,
  	0,259,251,1,0,0,0,259,255,1,0,0,0,259,256,1,0,0,0,259,257,1,0,0,0,259,
  	258,1,0,0,0,260,61,1,0,0,0,261,266,3,32,16,0,262,263,5,9,0,0,263,265,
  	3,32,16,0,264,262,1,0,0,0,265,268,1,0,0,0,266,264,1,0,0,0,266,267,1,0,
  	0,0,267,63,1,0,0,0,268,266,1,0,0,0,269,272,5,32,0,0,270,272,3,22,11,0,
  	271,269,1,0,0,0,271,270,1,0,0,0,272,65,1,0,0,0,24,68,70,79,89,97,104,
  	108,116,124,127,139,152,161,170,190,198,206,215,224,245,249,259,266,271
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  minicParserStaticData = staticData.release();
}

}

MiniCParser::MiniCParser(TokenStream *input) : MiniCParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

MiniCParser::MiniCParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  MiniCParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *minicParserStaticData->atn, minicParserStaticData->decisionToDFA, minicParserStaticData->sharedContextCache, options);
}

MiniCParser::~MiniCParser() {
  delete _interpreter;
}

const atn::ATN& MiniCParser::getATN() const {
  return *minicParserStaticData->atn;
}

std::string MiniCParser::getGrammarFileName() const {
  return "MiniC.g4";
}

const std::vector<std::string>& MiniCParser::getRuleNames() const {
  return minicParserStaticData->ruleNames;
}

const dfa::Vocabulary& MiniCParser::getVocabulary() const {
  return minicParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MiniCParser::getSerializedATN() const {
  return minicParserStaticData->serializedATN;
}


//----------------- CompileUnitContext ------------------------------------------------------------------

MiniCParser::CompileUnitContext::CompileUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::CompileUnitContext::EOF() {
  return getToken(MiniCParser::EOF, 0);
}

std::vector<MiniCParser::FuncDefContext *> MiniCParser::CompileUnitContext::funcDef() {
  return getRuleContexts<MiniCParser::FuncDefContext>();
}

MiniCParser::FuncDefContext* MiniCParser::CompileUnitContext::funcDef(size_t i) {
  return getRuleContext<MiniCParser::FuncDefContext>(i);
}

std::vector<MiniCParser::VarDeclContext *> MiniCParser::CompileUnitContext::varDecl() {
  return getRuleContexts<MiniCParser::VarDeclContext>();
}

MiniCParser::VarDeclContext* MiniCParser::CompileUnitContext::varDecl(size_t i) {
  return getRuleContext<MiniCParser::VarDeclContext>(i);
}


size_t MiniCParser::CompileUnitContext::getRuleIndex() const {
  return MiniCParser::RuleCompileUnit;
}


std::any MiniCParser::CompileUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitCompileUnit(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::CompileUnitContext* MiniCParser::compileUnit() {
  CompileUnitContext *_localctx = _tracker.createInstance<CompileUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, MiniCParser::RuleCompileUnit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_INT

    || _la == MiniCParser::T_VOID) {
      setState(68);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(66);
        funcDef();
        break;
      }

      case 2: {
        setState(67);
        varDecl();
        break;
      }

      default:
        break;
      }
      setState(72);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(73);
    match(MiniCParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDefContext ------------------------------------------------------------------

MiniCParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiniCParser::BasicTypeContext* MiniCParser::FuncDefContext::basicType() {
  return getRuleContext<MiniCParser::BasicTypeContext>(0);
}

tree::TerminalNode* MiniCParser::FuncDefContext::T_ID() {
  return getToken(MiniCParser::T_ID, 0);
}

tree::TerminalNode* MiniCParser::FuncDefContext::T_L_PAREN() {
  return getToken(MiniCParser::T_L_PAREN, 0);
}

tree::TerminalNode* MiniCParser::FuncDefContext::T_R_PAREN() {
  return getToken(MiniCParser::T_R_PAREN, 0);
}

MiniCParser::BlockContext* MiniCParser::FuncDefContext::block() {
  return getRuleContext<MiniCParser::BlockContext>(0);
}

MiniCParser::FormalParamListContext* MiniCParser::FuncDefContext::formalParamList() {
  return getRuleContext<MiniCParser::FormalParamListContext>(0);
}


size_t MiniCParser::FuncDefContext::getRuleIndex() const {
  return MiniCParser::RuleFuncDef;
}


std::any MiniCParser::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitFuncDef(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::FuncDefContext* MiniCParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 2, MiniCParser::RuleFuncDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    basicType();
    setState(76);
    match(MiniCParser::T_ID);
    setState(77);
    match(MiniCParser::T_L_PAREN);
    setState(79);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MiniCParser::T_INT

    || _la == MiniCParser::T_VOID) {
      setState(78);
      formalParamList();
    }
    setState(81);
    match(MiniCParser::T_R_PAREN);
    setState(82);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParamListContext ------------------------------------------------------------------

MiniCParser::FormalParamListContext::FormalParamListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MiniCParser::FormalParamContext *> MiniCParser::FormalParamListContext::formalParam() {
  return getRuleContexts<MiniCParser::FormalParamContext>();
}

MiniCParser::FormalParamContext* MiniCParser::FormalParamListContext::formalParam(size_t i) {
  return getRuleContext<MiniCParser::FormalParamContext>(i);
}

std::vector<tree::TerminalNode *> MiniCParser::FormalParamListContext::T_COMMA() {
  return getTokens(MiniCParser::T_COMMA);
}

tree::TerminalNode* MiniCParser::FormalParamListContext::T_COMMA(size_t i) {
  return getToken(MiniCParser::T_COMMA, i);
}


size_t MiniCParser::FormalParamListContext::getRuleIndex() const {
  return MiniCParser::RuleFormalParamList;
}


std::any MiniCParser::FormalParamListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitFormalParamList(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::FormalParamListContext* MiniCParser::formalParamList() {
  FormalParamListContext *_localctx = _tracker.createInstance<FormalParamListContext>(_ctx, getState());
  enterRule(_localctx, 4, MiniCParser::RuleFormalParamList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    formalParam();
    setState(89);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_COMMA) {
      setState(85);
      match(MiniCParser::T_COMMA);
      setState(86);
      formalParam();
      setState(91);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParamContext ------------------------------------------------------------------

MiniCParser::FormalParamContext::FormalParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiniCParser::BasicTypeContext* MiniCParser::FormalParamContext::basicType() {
  return getRuleContext<MiniCParser::BasicTypeContext>(0);
}

MiniCParser::VarDefContext* MiniCParser::FormalParamContext::varDef() {
  return getRuleContext<MiniCParser::VarDefContext>(0);
}


size_t MiniCParser::FormalParamContext::getRuleIndex() const {
  return MiniCParser::RuleFormalParam;
}


std::any MiniCParser::FormalParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitFormalParam(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::FormalParamContext* MiniCParser::formalParam() {
  FormalParamContext *_localctx = _tracker.createInstance<FormalParamContext>(_ctx, getState());
  enterRule(_localctx, 6, MiniCParser::RuleFormalParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    basicType();
    setState(93);
    varDef();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

MiniCParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::BlockContext::T_L_BRACE() {
  return getToken(MiniCParser::T_L_BRACE, 0);
}

tree::TerminalNode* MiniCParser::BlockContext::T_R_BRACE() {
  return getToken(MiniCParser::T_R_BRACE, 0);
}

MiniCParser::BlockItemListContext* MiniCParser::BlockContext::blockItemList() {
  return getRuleContext<MiniCParser::BlockItemListContext>(0);
}


size_t MiniCParser::BlockContext::getRuleIndex() const {
  return MiniCParser::RuleBlock;
}


std::any MiniCParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::BlockContext* MiniCParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 8, MiniCParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(MiniCParser::T_L_BRACE);
    setState(97);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 68434397210) != 0)) {
      setState(96);
      blockItemList();
    }
    setState(99);
    match(MiniCParser::T_R_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemListContext ------------------------------------------------------------------

MiniCParser::BlockItemListContext::BlockItemListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MiniCParser::BlockItemContext *> MiniCParser::BlockItemListContext::blockItem() {
  return getRuleContexts<MiniCParser::BlockItemContext>();
}

MiniCParser::BlockItemContext* MiniCParser::BlockItemListContext::blockItem(size_t i) {
  return getRuleContext<MiniCParser::BlockItemContext>(i);
}


size_t MiniCParser::BlockItemListContext::getRuleIndex() const {
  return MiniCParser::RuleBlockItemList;
}


std::any MiniCParser::BlockItemListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitBlockItemList(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::BlockItemListContext* MiniCParser::blockItemList() {
  BlockItemListContext *_localctx = _tracker.createInstance<BlockItemListContext>(_ctx, getState());
  enterRule(_localctx, 10, MiniCParser::RuleBlockItemList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(101);
      blockItem();
      setState(104); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 68434397210) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

MiniCParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiniCParser::StatementContext* MiniCParser::BlockItemContext::statement() {
  return getRuleContext<MiniCParser::StatementContext>(0);
}

MiniCParser::VarDeclContext* MiniCParser::BlockItemContext::varDecl() {
  return getRuleContext<MiniCParser::VarDeclContext>(0);
}


size_t MiniCParser::BlockItemContext::getRuleIndex() const {
  return MiniCParser::RuleBlockItem;
}


std::any MiniCParser::BlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitBlockItem(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::BlockItemContext* MiniCParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 12, MiniCParser::RuleBlockItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(108);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MiniCParser::T_L_PAREN:
      case MiniCParser::T_SEMICOLON:
      case MiniCParser::T_L_BRACE:
      case MiniCParser::T_SUB:
      case MiniCParser::T_NOT:
      case MiniCParser::T_RETURN:
      case MiniCParser::T_IF:
      case MiniCParser::T_WHILE:
      case MiniCParser::T_BREAK:
      case MiniCParser::T_CONTINUE:
      case MiniCParser::T_ID:
      case MiniCParser::T_DIGIT:
      case MiniCParser::T_OCT_DIGIT:
      case MiniCParser::T_HEX_DIGIT: {
        enterOuterAlt(_localctx, 1);
        setState(106);
        statement();
        break;
      }

      case MiniCParser::T_INT:
      case MiniCParser::T_VOID: {
        enterOuterAlt(_localctx, 2);
        setState(107);
        varDecl();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

MiniCParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiniCParser::BasicTypeContext* MiniCParser::VarDeclContext::basicType() {
  return getRuleContext<MiniCParser::BasicTypeContext>(0);
}

std::vector<MiniCParser::VarAndInitContext *> MiniCParser::VarDeclContext::varAndInit() {
  return getRuleContexts<MiniCParser::VarAndInitContext>();
}

MiniCParser::VarAndInitContext* MiniCParser::VarDeclContext::varAndInit(size_t i) {
  return getRuleContext<MiniCParser::VarAndInitContext>(i);
}

tree::TerminalNode* MiniCParser::VarDeclContext::T_SEMICOLON() {
  return getToken(MiniCParser::T_SEMICOLON, 0);
}

std::vector<tree::TerminalNode *> MiniCParser::VarDeclContext::T_COMMA() {
  return getTokens(MiniCParser::T_COMMA);
}

tree::TerminalNode* MiniCParser::VarDeclContext::T_COMMA(size_t i) {
  return getToken(MiniCParser::T_COMMA, i);
}


size_t MiniCParser::VarDeclContext::getRuleIndex() const {
  return MiniCParser::RuleVarDecl;
}


std::any MiniCParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::VarDeclContext* MiniCParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 14, MiniCParser::RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110);
    basicType();
    setState(111);
    varAndInit();
    setState(116);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_COMMA) {
      setState(112);
      match(MiniCParser::T_COMMA);
      setState(113);
      varAndInit();
      setState(118);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(119);
    match(MiniCParser::T_SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarAndInitContext ------------------------------------------------------------------

MiniCParser::VarAndInitContext::VarAndInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiniCParser::VarDefContext* MiniCParser::VarAndInitContext::varDef() {
  return getRuleContext<MiniCParser::VarDefContext>(0);
}

tree::TerminalNode* MiniCParser::VarAndInitContext::T_ASSIGN() {
  return getToken(MiniCParser::T_ASSIGN, 0);
}

MiniCParser::ExprContext* MiniCParser::VarAndInitContext::expr() {
  return getRuleContext<MiniCParser::ExprContext>(0);
}

MiniCParser::ArrDefContext* MiniCParser::VarAndInitContext::arrDef() {
  return getRuleContext<MiniCParser::ArrDefContext>(0);
}


size_t MiniCParser::VarAndInitContext::getRuleIndex() const {
  return MiniCParser::RuleVarAndInit;
}


std::any MiniCParser::VarAndInitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitVarAndInit(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::VarAndInitContext* MiniCParser::varAndInit() {
  VarAndInitContext *_localctx = _tracker.createInstance<VarAndInitContext>(_ctx, getState());
  enterRule(_localctx, 16, MiniCParser::RuleVarAndInit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(127);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(121);
      varDef();
      setState(124);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MiniCParser::T_ASSIGN) {
        setState(122);
        match(MiniCParser::T_ASSIGN);
        setState(123);
        expr();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(126);
      arrDef();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasicTypeContext ------------------------------------------------------------------

MiniCParser::BasicTypeContext::BasicTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::BasicTypeContext::T_INT() {
  return getToken(MiniCParser::T_INT, 0);
}

tree::TerminalNode* MiniCParser::BasicTypeContext::T_VOID() {
  return getToken(MiniCParser::T_VOID, 0);
}


size_t MiniCParser::BasicTypeContext::getRuleIndex() const {
  return MiniCParser::RuleBasicType;
}


std::any MiniCParser::BasicTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitBasicType(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::BasicTypeContext* MiniCParser::basicType() {
  BasicTypeContext *_localctx = _tracker.createInstance<BasicTypeContext>(_ctx, getState());
  enterRule(_localctx, 18, MiniCParser::RuleBasicType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    _la = _input->LA(1);
    if (!(_la == MiniCParser::T_INT

    || _la == MiniCParser::T_VOID)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDefContext ------------------------------------------------------------------

MiniCParser::VarDefContext::VarDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::VarDefContext::T_ID() {
  return getToken(MiniCParser::T_ID, 0);
}


size_t MiniCParser::VarDefContext::getRuleIndex() const {
  return MiniCParser::RuleVarDef;
}


std::any MiniCParser::VarDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitVarDef(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::VarDefContext* MiniCParser::varDef() {
  VarDefContext *_localctx = _tracker.createInstance<VarDefContext>(_ctx, getState());
  enterRule(_localctx, 20, MiniCParser::RuleVarDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(MiniCParser::T_ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrDefContext ------------------------------------------------------------------

MiniCParser::ArrDefContext::ArrDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::ArrDefContext::T_ID() {
  return getToken(MiniCParser::T_ID, 0);
}

std::vector<tree::TerminalNode *> MiniCParser::ArrDefContext::T_L_SQUARE_BRACKTE() {
  return getTokens(MiniCParser::T_L_SQUARE_BRACKTE);
}

tree::TerminalNode* MiniCParser::ArrDefContext::T_L_SQUARE_BRACKTE(size_t i) {
  return getToken(MiniCParser::T_L_SQUARE_BRACKTE, i);
}

std::vector<tree::TerminalNode *> MiniCParser::ArrDefContext::T_DIGIT() {
  return getTokens(MiniCParser::T_DIGIT);
}

tree::TerminalNode* MiniCParser::ArrDefContext::T_DIGIT(size_t i) {
  return getToken(MiniCParser::T_DIGIT, i);
}

std::vector<tree::TerminalNode *> MiniCParser::ArrDefContext::T_R_SQUARE_BRACKTE() {
  return getTokens(MiniCParser::T_R_SQUARE_BRACKTE);
}

tree::TerminalNode* MiniCParser::ArrDefContext::T_R_SQUARE_BRACKTE(size_t i) {
  return getToken(MiniCParser::T_R_SQUARE_BRACKTE, i);
}


size_t MiniCParser::ArrDefContext::getRuleIndex() const {
  return MiniCParser::RuleArrDef;
}


std::any MiniCParser::ArrDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitArrDef(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::ArrDefContext* MiniCParser::arrDef() {
  ArrDefContext *_localctx = _tracker.createInstance<ArrDefContext>(_ctx, getState());
  enterRule(_localctx, 22, MiniCParser::RuleArrDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    match(MiniCParser::T_ID);
    setState(137); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(134);
      match(MiniCParser::T_L_SQUARE_BRACKTE);
      setState(135);
      match(MiniCParser::T_DIGIT);
      setState(136);
      match(MiniCParser::T_R_SQUARE_BRACKTE);
      setState(139); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MiniCParser::T_L_SQUARE_BRACKTE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

MiniCParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MiniCParser::StatementContext::getRuleIndex() const {
  return MiniCParser::RuleStatement;
}

void MiniCParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WhileStatementContext ------------------------------------------------------------------

MiniCParser::WhileExprContext* MiniCParser::WhileStatementContext::whileExpr() {
  return getRuleContext<MiniCParser::WhileExprContext>(0);
}

MiniCParser::WhileStatementContext::WhileStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any MiniCParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlockStatementContext ------------------------------------------------------------------

MiniCParser::BlockContext* MiniCParser::BlockStatementContext::block() {
  return getRuleContext<MiniCParser::BlockContext>(0);
}

MiniCParser::BlockStatementContext::BlockStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any MiniCParser::BlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitBlockStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfelseStatementContext ------------------------------------------------------------------

MiniCParser::IfelseExprContext* MiniCParser::IfelseStatementContext::ifelseExpr() {
  return getRuleContext<MiniCParser::IfelseExprContext>(0);
}

MiniCParser::IfelseStatementContext::IfelseStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any MiniCParser::IfelseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitIfelseStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignStatementContext ------------------------------------------------------------------

MiniCParser::LValContext* MiniCParser::AssignStatementContext::lVal() {
  return getRuleContext<MiniCParser::LValContext>(0);
}

tree::TerminalNode* MiniCParser::AssignStatementContext::T_ASSIGN() {
  return getToken(MiniCParser::T_ASSIGN, 0);
}

MiniCParser::ExprContext* MiniCParser::AssignStatementContext::expr() {
  return getRuleContext<MiniCParser::ExprContext>(0);
}

tree::TerminalNode* MiniCParser::AssignStatementContext::T_SEMICOLON() {
  return getToken(MiniCParser::T_SEMICOLON, 0);
}

MiniCParser::AssignStatementContext::AssignStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any MiniCParser::AssignStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitAssignStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BreakStatementContext ------------------------------------------------------------------

tree::TerminalNode* MiniCParser::BreakStatementContext::T_BREAK() {
  return getToken(MiniCParser::T_BREAK, 0);
}

tree::TerminalNode* MiniCParser::BreakStatementContext::T_SEMICOLON() {
  return getToken(MiniCParser::T_SEMICOLON, 0);
}

MiniCParser::BreakStatementContext::BreakStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any MiniCParser::BreakStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitBreakStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpressionStatementContext ------------------------------------------------------------------

tree::TerminalNode* MiniCParser::ExpressionStatementContext::T_SEMICOLON() {
  return getToken(MiniCParser::T_SEMICOLON, 0);
}

MiniCParser::ExprContext* MiniCParser::ExpressionStatementContext::expr() {
  return getRuleContext<MiniCParser::ExprContext>(0);
}

MiniCParser::ExpressionStatementContext::ExpressionStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any MiniCParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ContinueStatementContext ------------------------------------------------------------------

tree::TerminalNode* MiniCParser::ContinueStatementContext::T_CONTINUE() {
  return getToken(MiniCParser::T_CONTINUE, 0);
}

tree::TerminalNode* MiniCParser::ContinueStatementContext::T_SEMICOLON() {
  return getToken(MiniCParser::T_SEMICOLON, 0);
}

MiniCParser::ContinueStatementContext::ContinueStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any MiniCParser::ContinueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitContinueStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnStatementContext ------------------------------------------------------------------

tree::TerminalNode* MiniCParser::ReturnStatementContext::T_RETURN() {
  return getToken(MiniCParser::T_RETURN, 0);
}

MiniCParser::ExprContext* MiniCParser::ReturnStatementContext::expr() {
  return getRuleContext<MiniCParser::ExprContext>(0);
}

tree::TerminalNode* MiniCParser::ReturnStatementContext::T_SEMICOLON() {
  return getToken(MiniCParser::T_SEMICOLON, 0);
}

MiniCParser::ReturnStatementContext::ReturnStatementContext(StatementContext *ctx) { copyFrom(ctx); }


std::any MiniCParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}
MiniCParser::StatementContext* MiniCParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 24, MiniCParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(161);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<MiniCParser::ReturnStatementContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(141);
      match(MiniCParser::T_RETURN);
      setState(142);
      expr();
      setState(143);
      match(MiniCParser::T_SEMICOLON);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<MiniCParser::AssignStatementContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(145);
      lVal();
      setState(146);
      match(MiniCParser::T_ASSIGN);
      setState(147);
      expr();
      setState(148);
      match(MiniCParser::T_SEMICOLON);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<MiniCParser::BlockStatementContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(150);
      block();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<MiniCParser::ExpressionStatementContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(152);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 64424642562) != 0)) {
        setState(151);
        expr();
      }
      setState(154);
      match(MiniCParser::T_SEMICOLON);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<MiniCParser::IfelseStatementContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(155);
      ifelseExpr();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<MiniCParser::WhileStatementContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(156);
      whileExpr();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<MiniCParser::BreakStatementContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(157);
      match(MiniCParser::T_BREAK);
      setState(158);
      match(MiniCParser::T_SEMICOLON);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<MiniCParser::ContinueStatementContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(159);
      match(MiniCParser::T_CONTINUE);
      setState(160);
      match(MiniCParser::T_SEMICOLON);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfelseExprContext ------------------------------------------------------------------

MiniCParser::IfelseExprContext::IfelseExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::IfelseExprContext::T_IF() {
  return getToken(MiniCParser::T_IF, 0);
}

tree::TerminalNode* MiniCParser::IfelseExprContext::T_L_PAREN() {
  return getToken(MiniCParser::T_L_PAREN, 0);
}

MiniCParser::CondContext* MiniCParser::IfelseExprContext::cond() {
  return getRuleContext<MiniCParser::CondContext>(0);
}

tree::TerminalNode* MiniCParser::IfelseExprContext::T_R_PAREN() {
  return getToken(MiniCParser::T_R_PAREN, 0);
}

std::vector<MiniCParser::StatementContext *> MiniCParser::IfelseExprContext::statement() {
  return getRuleContexts<MiniCParser::StatementContext>();
}

MiniCParser::StatementContext* MiniCParser::IfelseExprContext::statement(size_t i) {
  return getRuleContext<MiniCParser::StatementContext>(i);
}

tree::TerminalNode* MiniCParser::IfelseExprContext::T_ELSE() {
  return getToken(MiniCParser::T_ELSE, 0);
}


size_t MiniCParser::IfelseExprContext::getRuleIndex() const {
  return MiniCParser::RuleIfelseExpr;
}


std::any MiniCParser::IfelseExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitIfelseExpr(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::IfelseExprContext* MiniCParser::ifelseExpr() {
  IfelseExprContext *_localctx = _tracker.createInstance<IfelseExprContext>(_ctx, getState());
  enterRule(_localctx, 26, MiniCParser::RuleIfelseExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(MiniCParser::T_IF);
    setState(164);
    match(MiniCParser::T_L_PAREN);
    setState(165);
    cond();
    setState(166);
    match(MiniCParser::T_R_PAREN);
    setState(167);
    statement();
    setState(170);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(168);
      match(MiniCParser::T_ELSE);
      setState(169);
      statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondContext ------------------------------------------------------------------

MiniCParser::CondContext::CondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiniCParser::ExprContext* MiniCParser::CondContext::expr() {
  return getRuleContext<MiniCParser::ExprContext>(0);
}


size_t MiniCParser::CondContext::getRuleIndex() const {
  return MiniCParser::RuleCond;
}


std::any MiniCParser::CondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitCond(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::CondContext* MiniCParser::cond() {
  CondContext *_localctx = _tracker.createInstance<CondContext>(_ctx, getState());
  enterRule(_localctx, 28, MiniCParser::RuleCond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(172);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileExprContext ------------------------------------------------------------------

MiniCParser::WhileExprContext::WhileExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::WhileExprContext::T_WHILE() {
  return getToken(MiniCParser::T_WHILE, 0);
}

tree::TerminalNode* MiniCParser::WhileExprContext::T_L_PAREN() {
  return getToken(MiniCParser::T_L_PAREN, 0);
}

MiniCParser::CondContext* MiniCParser::WhileExprContext::cond() {
  return getRuleContext<MiniCParser::CondContext>(0);
}

tree::TerminalNode* MiniCParser::WhileExprContext::T_R_PAREN() {
  return getToken(MiniCParser::T_R_PAREN, 0);
}

MiniCParser::StatementContext* MiniCParser::WhileExprContext::statement() {
  return getRuleContext<MiniCParser::StatementContext>(0);
}


size_t MiniCParser::WhileExprContext::getRuleIndex() const {
  return MiniCParser::RuleWhileExpr;
}


std::any MiniCParser::WhileExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitWhileExpr(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::WhileExprContext* MiniCParser::whileExpr() {
  WhileExprContext *_localctx = _tracker.createInstance<WhileExprContext>(_ctx, getState());
  enterRule(_localctx, 30, MiniCParser::RuleWhileExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    match(MiniCParser::T_WHILE);
    setState(175);
    match(MiniCParser::T_L_PAREN);
    setState(176);
    cond();
    setState(177);
    match(MiniCParser::T_R_PAREN);
    setState(178);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

MiniCParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiniCParser::LogicBinaryExpContext* MiniCParser::ExprContext::logicBinaryExp() {
  return getRuleContext<MiniCParser::LogicBinaryExpContext>(0);
}


size_t MiniCParser::ExprContext::getRuleIndex() const {
  return MiniCParser::RuleExpr;
}


std::any MiniCParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::ExprContext* MiniCParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 32, MiniCParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    logicBinaryExp();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithmeticExpContext ------------------------------------------------------------------

MiniCParser::ArithmeticExpContext::ArithmeticExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiniCParser::AddExpContext* MiniCParser::ArithmeticExpContext::addExp() {
  return getRuleContext<MiniCParser::AddExpContext>(0);
}


size_t MiniCParser::ArithmeticExpContext::getRuleIndex() const {
  return MiniCParser::RuleArithmeticExp;
}


std::any MiniCParser::ArithmeticExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitArithmeticExp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::ArithmeticExpContext* MiniCParser::arithmeticExp() {
  ArithmeticExpContext *_localctx = _tracker.createInstance<ArithmeticExpContext>(_ctx, getState());
  enterRule(_localctx, 34, MiniCParser::RuleArithmeticExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    addExp();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationalBinaryExpContext ------------------------------------------------------------------

MiniCParser::RelationalBinaryExpContext::RelationalBinaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MiniCParser::ArithmeticExpContext *> MiniCParser::RelationalBinaryExpContext::arithmeticExp() {
  return getRuleContexts<MiniCParser::ArithmeticExpContext>();
}

MiniCParser::ArithmeticExpContext* MiniCParser::RelationalBinaryExpContext::arithmeticExp(size_t i) {
  return getRuleContext<MiniCParser::ArithmeticExpContext>(i);
}

std::vector<MiniCParser::RelationalBinaryOpContext *> MiniCParser::RelationalBinaryExpContext::relationalBinaryOp() {
  return getRuleContexts<MiniCParser::RelationalBinaryOpContext>();
}

MiniCParser::RelationalBinaryOpContext* MiniCParser::RelationalBinaryExpContext::relationalBinaryOp(size_t i) {
  return getRuleContext<MiniCParser::RelationalBinaryOpContext>(i);
}


size_t MiniCParser::RelationalBinaryExpContext::getRuleIndex() const {
  return MiniCParser::RuleRelationalBinaryExp;
}


std::any MiniCParser::RelationalBinaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitRelationalBinaryExp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::RelationalBinaryExpContext* MiniCParser::relationalBinaryExp() {
  RelationalBinaryExpContext *_localctx = _tracker.createInstance<RelationalBinaryExpContext>(_ctx, getState());
  enterRule(_localctx, 36, MiniCParser::RuleRelationalBinaryExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    arithmeticExp();
    setState(190);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16515072) != 0)) {
      setState(185);
      relationalBinaryOp();
      setState(186);
      arithmeticExp();
      setState(192);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicBinaryExpContext ------------------------------------------------------------------

MiniCParser::LogicBinaryExpContext::LogicBinaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MiniCParser::LogicAndExpContext *> MiniCParser::LogicBinaryExpContext::logicAndExp() {
  return getRuleContexts<MiniCParser::LogicAndExpContext>();
}

MiniCParser::LogicAndExpContext* MiniCParser::LogicBinaryExpContext::logicAndExp(size_t i) {
  return getRuleContext<MiniCParser::LogicAndExpContext>(i);
}

std::vector<tree::TerminalNode *> MiniCParser::LogicBinaryExpContext::T_OR() {
  return getTokens(MiniCParser::T_OR);
}

tree::TerminalNode* MiniCParser::LogicBinaryExpContext::T_OR(size_t i) {
  return getToken(MiniCParser::T_OR, i);
}


size_t MiniCParser::LogicBinaryExpContext::getRuleIndex() const {
  return MiniCParser::RuleLogicBinaryExp;
}


std::any MiniCParser::LogicBinaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitLogicBinaryExp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::LogicBinaryExpContext* MiniCParser::logicBinaryExp() {
  LogicBinaryExpContext *_localctx = _tracker.createInstance<LogicBinaryExpContext>(_ctx, getState());
  enterRule(_localctx, 38, MiniCParser::RuleLogicBinaryExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(193);
    logicAndExp();
    setState(198);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_OR) {
      setState(194);
      match(MiniCParser::T_OR);
      setState(195);
      logicAndExp();
      setState(200);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicAndExpContext ------------------------------------------------------------------

MiniCParser::LogicAndExpContext::LogicAndExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MiniCParser::RelationalBinaryExpContext *> MiniCParser::LogicAndExpContext::relationalBinaryExp() {
  return getRuleContexts<MiniCParser::RelationalBinaryExpContext>();
}

MiniCParser::RelationalBinaryExpContext* MiniCParser::LogicAndExpContext::relationalBinaryExp(size_t i) {
  return getRuleContext<MiniCParser::RelationalBinaryExpContext>(i);
}

std::vector<tree::TerminalNode *> MiniCParser::LogicAndExpContext::T_AND() {
  return getTokens(MiniCParser::T_AND);
}

tree::TerminalNode* MiniCParser::LogicAndExpContext::T_AND(size_t i) {
  return getToken(MiniCParser::T_AND, i);
}


size_t MiniCParser::LogicAndExpContext::getRuleIndex() const {
  return MiniCParser::RuleLogicAndExp;
}


std::any MiniCParser::LogicAndExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitLogicAndExp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::LogicAndExpContext* MiniCParser::logicAndExp() {
  LogicAndExpContext *_localctx = _tracker.createInstance<LogicAndExpContext>(_ctx, getState());
  enterRule(_localctx, 40, MiniCParser::RuleLogicAndExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    relationalBinaryExp();
    setState(206);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_AND) {
      setState(202);
      match(MiniCParser::T_AND);
      setState(203);
      relationalBinaryExp();
      setState(208);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddExpContext ------------------------------------------------------------------

MiniCParser::AddExpContext::AddExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MiniCParser::MulExpContext *> MiniCParser::AddExpContext::mulExp() {
  return getRuleContexts<MiniCParser::MulExpContext>();
}

MiniCParser::MulExpContext* MiniCParser::AddExpContext::mulExp(size_t i) {
  return getRuleContext<MiniCParser::MulExpContext>(i);
}

std::vector<MiniCParser::AddOpContext *> MiniCParser::AddExpContext::addOp() {
  return getRuleContexts<MiniCParser::AddOpContext>();
}

MiniCParser::AddOpContext* MiniCParser::AddExpContext::addOp(size_t i) {
  return getRuleContext<MiniCParser::AddOpContext>(i);
}


size_t MiniCParser::AddExpContext::getRuleIndex() const {
  return MiniCParser::RuleAddExp;
}


std::any MiniCParser::AddExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitAddExp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::AddExpContext* MiniCParser::addExp() {
  AddExpContext *_localctx = _tracker.createInstance<AddExpContext>(_ctx, getState());
  enterRule(_localctx, 42, MiniCParser::RuleAddExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
    mulExp();
    setState(215);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_ADD

    || _la == MiniCParser::T_SUB) {
      setState(210);
      addOp();
      setState(211);
      mulExp();
      setState(217);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulExpContext ------------------------------------------------------------------

MiniCParser::MulExpContext::MulExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MiniCParser::UnaryExpContext *> MiniCParser::MulExpContext::unaryExp() {
  return getRuleContexts<MiniCParser::UnaryExpContext>();
}

MiniCParser::UnaryExpContext* MiniCParser::MulExpContext::unaryExp(size_t i) {
  return getRuleContext<MiniCParser::UnaryExpContext>(i);
}

std::vector<MiniCParser::MulOpContext *> MiniCParser::MulExpContext::mulOp() {
  return getRuleContexts<MiniCParser::MulOpContext>();
}

MiniCParser::MulOpContext* MiniCParser::MulExpContext::mulOp(size_t i) {
  return getRuleContext<MiniCParser::MulOpContext>(i);
}


size_t MiniCParser::MulExpContext::getRuleIndex() const {
  return MiniCParser::RuleMulExp;
}


std::any MiniCParser::MulExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitMulExp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::MulExpContext* MiniCParser::mulExp() {
  MulExpContext *_localctx = _tracker.createInstance<MulExpContext>(_ctx, getState());
  enterRule(_localctx, 44, MiniCParser::RuleMulExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    unaryExp();
    setState(224);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 28672) != 0)) {
      setState(219);
      mulOp();
      setState(220);
      unaryExp();
      setState(226);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddOpContext ------------------------------------------------------------------

MiniCParser::AddOpContext::AddOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::AddOpContext::T_ADD() {
  return getToken(MiniCParser::T_ADD, 0);
}

tree::TerminalNode* MiniCParser::AddOpContext::T_SUB() {
  return getToken(MiniCParser::T_SUB, 0);
}


size_t MiniCParser::AddOpContext::getRuleIndex() const {
  return MiniCParser::RuleAddOp;
}


std::any MiniCParser::AddOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitAddOp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::AddOpContext* MiniCParser::addOp() {
  AddOpContext *_localctx = _tracker.createInstance<AddOpContext>(_ctx, getState());
  enterRule(_localctx, 46, MiniCParser::RuleAddOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    _la = _input->LA(1);
    if (!(_la == MiniCParser::T_ADD

    || _la == MiniCParser::T_SUB)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulOpContext ------------------------------------------------------------------

MiniCParser::MulOpContext::MulOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::MulOpContext::T_MUL() {
  return getToken(MiniCParser::T_MUL, 0);
}

tree::TerminalNode* MiniCParser::MulOpContext::T_DIV() {
  return getToken(MiniCParser::T_DIV, 0);
}

tree::TerminalNode* MiniCParser::MulOpContext::T_MOD() {
  return getToken(MiniCParser::T_MOD, 0);
}


size_t MiniCParser::MulOpContext::getRuleIndex() const {
  return MiniCParser::RuleMulOp;
}


std::any MiniCParser::MulOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitMulOp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::MulOpContext* MiniCParser::mulOp() {
  MulOpContext *_localctx = _tracker.createInstance<MulOpContext>(_ctx, getState());
  enterRule(_localctx, 48, MiniCParser::RuleMulOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 28672) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationalBinaryOpContext ------------------------------------------------------------------

MiniCParser::RelationalBinaryOpContext::RelationalBinaryOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::RelationalBinaryOpContext::T_EQUAL() {
  return getToken(MiniCParser::T_EQUAL, 0);
}

tree::TerminalNode* MiniCParser::RelationalBinaryOpContext::T_NOT_EQUAL() {
  return getToken(MiniCParser::T_NOT_EQUAL, 0);
}

tree::TerminalNode* MiniCParser::RelationalBinaryOpContext::T_GREATER() {
  return getToken(MiniCParser::T_GREATER, 0);
}

tree::TerminalNode* MiniCParser::RelationalBinaryOpContext::T_LESSER() {
  return getToken(MiniCParser::T_LESSER, 0);
}

tree::TerminalNode* MiniCParser::RelationalBinaryOpContext::T_GREATER_EQUAL() {
  return getToken(MiniCParser::T_GREATER_EQUAL, 0);
}

tree::TerminalNode* MiniCParser::RelationalBinaryOpContext::T_LESSER_EQUAL() {
  return getToken(MiniCParser::T_LESSER_EQUAL, 0);
}


size_t MiniCParser::RelationalBinaryOpContext::getRuleIndex() const {
  return MiniCParser::RuleRelationalBinaryOp;
}


std::any MiniCParser::RelationalBinaryOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitRelationalBinaryOp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::RelationalBinaryOpContext* MiniCParser::relationalBinaryOp() {
  RelationalBinaryOpContext *_localctx = _tracker.createInstance<RelationalBinaryOpContext>(_ctx, getState());
  enterRule(_localctx, 50, MiniCParser::RuleRelationalBinaryOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16515072) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicBinaryOpContext ------------------------------------------------------------------

MiniCParser::LogicBinaryOpContext::LogicBinaryOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::LogicBinaryOpContext::T_AND() {
  return getToken(MiniCParser::T_AND, 0);
}

tree::TerminalNode* MiniCParser::LogicBinaryOpContext::T_OR() {
  return getToken(MiniCParser::T_OR, 0);
}


size_t MiniCParser::LogicBinaryOpContext::getRuleIndex() const {
  return MiniCParser::RuleLogicBinaryOp;
}


std::any MiniCParser::LogicBinaryOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitLogicBinaryOp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::LogicBinaryOpContext* MiniCParser::logicBinaryOp() {
  LogicBinaryOpContext *_localctx = _tracker.createInstance<LogicBinaryOpContext>(_ctx, getState());
  enterRule(_localctx, 52, MiniCParser::RuleLogicBinaryOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    _la = _input->LA(1);
    if (!(_la == MiniCParser::T_AND

    || _la == MiniCParser::T_OR)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NormalUnaryExpContext ------------------------------------------------------------------

MiniCParser::NormalUnaryExpContext::NormalUnaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiniCParser::UnaryOpContext* MiniCParser::NormalUnaryExpContext::unaryOp() {
  return getRuleContext<MiniCParser::UnaryOpContext>(0);
}

MiniCParser::UnaryExpContext* MiniCParser::NormalUnaryExpContext::unaryExp() {
  return getRuleContext<MiniCParser::UnaryExpContext>(0);
}


size_t MiniCParser::NormalUnaryExpContext::getRuleIndex() const {
  return MiniCParser::RuleNormalUnaryExp;
}


std::any MiniCParser::NormalUnaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitNormalUnaryExp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::NormalUnaryExpContext* MiniCParser::normalUnaryExp() {
  NormalUnaryExpContext *_localctx = _tracker.createInstance<NormalUnaryExpContext>(_ctx, getState());
  enterRule(_localctx, 54, MiniCParser::RuleNormalUnaryExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    unaryOp();
    setState(236);
    unaryExp();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOpContext ------------------------------------------------------------------

MiniCParser::UnaryOpContext::UnaryOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::UnaryOpContext::T_SUB() {
  return getToken(MiniCParser::T_SUB, 0);
}

tree::TerminalNode* MiniCParser::UnaryOpContext::T_NOT() {
  return getToken(MiniCParser::T_NOT, 0);
}


size_t MiniCParser::UnaryOpContext::getRuleIndex() const {
  return MiniCParser::RuleUnaryOp;
}


std::any MiniCParser::UnaryOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitUnaryOp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::UnaryOpContext* MiniCParser::unaryOp() {
  UnaryOpContext *_localctx = _tracker.createInstance<UnaryOpContext>(_ctx, getState());
  enterRule(_localctx, 56, MiniCParser::RuleUnaryOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    _la = _input->LA(1);
    if (!(_la == MiniCParser::T_SUB

    || _la == MiniCParser::T_NOT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpContext ------------------------------------------------------------------

MiniCParser::UnaryExpContext::UnaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MiniCParser::ArrDefContext* MiniCParser::UnaryExpContext::arrDef() {
  return getRuleContext<MiniCParser::ArrDefContext>(0);
}

MiniCParser::PrimaryExpContext* MiniCParser::UnaryExpContext::primaryExp() {
  return getRuleContext<MiniCParser::PrimaryExpContext>(0);
}

tree::TerminalNode* MiniCParser::UnaryExpContext::T_ID() {
  return getToken(MiniCParser::T_ID, 0);
}

tree::TerminalNode* MiniCParser::UnaryExpContext::T_L_PAREN() {
  return getToken(MiniCParser::T_L_PAREN, 0);
}

tree::TerminalNode* MiniCParser::UnaryExpContext::T_R_PAREN() {
  return getToken(MiniCParser::T_R_PAREN, 0);
}

MiniCParser::RealParamListContext* MiniCParser::UnaryExpContext::realParamList() {
  return getRuleContext<MiniCParser::RealParamListContext>(0);
}

MiniCParser::NormalUnaryExpContext* MiniCParser::UnaryExpContext::normalUnaryExp() {
  return getRuleContext<MiniCParser::NormalUnaryExpContext>(0);
}


size_t MiniCParser::UnaryExpContext::getRuleIndex() const {
  return MiniCParser::RuleUnaryExp;
}


std::any MiniCParser::UnaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitUnaryExp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::UnaryExpContext* MiniCParser::unaryExp() {
  UnaryExpContext *_localctx = _tracker.createInstance<UnaryExpContext>(_ctx, getState());
  enterRule(_localctx, 58, MiniCParser::RuleUnaryExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(249);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(240);
      arrDef();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(241);
      primaryExp();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(242);
      match(MiniCParser::T_ID);
      setState(243);
      match(MiniCParser::T_L_PAREN);
      setState(245);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 64424642562) != 0)) {
        setState(244);
        realParamList();
      }
      setState(247);
      match(MiniCParser::T_R_PAREN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(248);
      normalUnaryExp();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpContext ------------------------------------------------------------------

MiniCParser::PrimaryExpContext::PrimaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::PrimaryExpContext::T_L_PAREN() {
  return getToken(MiniCParser::T_L_PAREN, 0);
}

MiniCParser::ExprContext* MiniCParser::PrimaryExpContext::expr() {
  return getRuleContext<MiniCParser::ExprContext>(0);
}

tree::TerminalNode* MiniCParser::PrimaryExpContext::T_R_PAREN() {
  return getToken(MiniCParser::T_R_PAREN, 0);
}

tree::TerminalNode* MiniCParser::PrimaryExpContext::T_DIGIT() {
  return getToken(MiniCParser::T_DIGIT, 0);
}

tree::TerminalNode* MiniCParser::PrimaryExpContext::T_OCT_DIGIT() {
  return getToken(MiniCParser::T_OCT_DIGIT, 0);
}

tree::TerminalNode* MiniCParser::PrimaryExpContext::T_HEX_DIGIT() {
  return getToken(MiniCParser::T_HEX_DIGIT, 0);
}

MiniCParser::LValContext* MiniCParser::PrimaryExpContext::lVal() {
  return getRuleContext<MiniCParser::LValContext>(0);
}


size_t MiniCParser::PrimaryExpContext::getRuleIndex() const {
  return MiniCParser::RulePrimaryExp;
}


std::any MiniCParser::PrimaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitPrimaryExp(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::PrimaryExpContext* MiniCParser::primaryExp() {
  PrimaryExpContext *_localctx = _tracker.createInstance<PrimaryExpContext>(_ctx, getState());
  enterRule(_localctx, 60, MiniCParser::RulePrimaryExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(259);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MiniCParser::T_L_PAREN: {
        enterOuterAlt(_localctx, 1);
        setState(251);
        match(MiniCParser::T_L_PAREN);
        setState(252);
        expr();
        setState(253);
        match(MiniCParser::T_R_PAREN);
        break;
      }

      case MiniCParser::T_DIGIT: {
        enterOuterAlt(_localctx, 2);
        setState(255);
        match(MiniCParser::T_DIGIT);
        break;
      }

      case MiniCParser::T_OCT_DIGIT: {
        enterOuterAlt(_localctx, 3);
        setState(256);
        match(MiniCParser::T_OCT_DIGIT);
        break;
      }

      case MiniCParser::T_HEX_DIGIT: {
        enterOuterAlt(_localctx, 4);
        setState(257);
        match(MiniCParser::T_HEX_DIGIT);
        break;
      }

      case MiniCParser::T_ID: {
        enterOuterAlt(_localctx, 5);
        setState(258);
        lVal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RealParamListContext ------------------------------------------------------------------

MiniCParser::RealParamListContext::RealParamListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MiniCParser::ExprContext *> MiniCParser::RealParamListContext::expr() {
  return getRuleContexts<MiniCParser::ExprContext>();
}

MiniCParser::ExprContext* MiniCParser::RealParamListContext::expr(size_t i) {
  return getRuleContext<MiniCParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> MiniCParser::RealParamListContext::T_COMMA() {
  return getTokens(MiniCParser::T_COMMA);
}

tree::TerminalNode* MiniCParser::RealParamListContext::T_COMMA(size_t i) {
  return getToken(MiniCParser::T_COMMA, i);
}


size_t MiniCParser::RealParamListContext::getRuleIndex() const {
  return MiniCParser::RuleRealParamList;
}


std::any MiniCParser::RealParamListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitRealParamList(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::RealParamListContext* MiniCParser::realParamList() {
  RealParamListContext *_localctx = _tracker.createInstance<RealParamListContext>(_ctx, getState());
  enterRule(_localctx, 62, MiniCParser::RuleRealParamList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
    expr();
    setState(266);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_COMMA) {
      setState(262);
      match(MiniCParser::T_COMMA);
      setState(263);
      expr();
      setState(268);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LValContext ------------------------------------------------------------------

MiniCParser::LValContext::LValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::LValContext::T_ID() {
  return getToken(MiniCParser::T_ID, 0);
}

MiniCParser::ArrDefContext* MiniCParser::LValContext::arrDef() {
  return getRuleContext<MiniCParser::ArrDefContext>(0);
}


size_t MiniCParser::LValContext::getRuleIndex() const {
  return MiniCParser::RuleLVal;
}


std::any MiniCParser::LValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitLVal(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::LValContext* MiniCParser::lVal() {
  LValContext *_localctx = _tracker.createInstance<LValContext>(_ctx, getState());
  enterRule(_localctx, 64, MiniCParser::RuleLVal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(271);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(269);
      match(MiniCParser::T_ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(270);
      arrDef();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void MiniCParser::initialize() {
  ::antlr4::internal::call_once(minicParserOnceFlag, minicParserInitialize);
}
