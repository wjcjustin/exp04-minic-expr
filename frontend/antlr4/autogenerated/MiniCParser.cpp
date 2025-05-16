
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
      "compileUnit", "funcDef", "block", "blockItemList", "blockItem", "varDecl", 
      "basicType", "varDef", "statement", "ifelseExpr", "cond", "whileExpr", 
      "breakStatement", "continueStatement", "expr", "arithmeticExp", "relationalBinaryExp", 
      "logicBinaryExp", "logicAndExp", "addExp", "mulExp", "addOp", "mulOp", 
      "relationalBinaryOp", "logicBinaryOp", "normalUnaryExp", "unaryOp", 
      "unaryExp", "primaryExp", "realParamList", "lVal"
    },
    std::vector<std::string>{
      "", "'('", "')'", "';'", "'{'", "'}'", "'='", "','", "'+'", "'-'", 
      "'*'", "'/'", "'%'", "'&&'", "'||'", "'!'", "'=='", "'!='", "'>'", 
      "'<'", "'>='", "'<='", "'return'", "'int'", "'void'", "'if'", "'else'", 
      "'while'", "'break'", "'continue'"
    },
    std::vector<std::string>{
      "", "T_L_PAREN", "T_R_PAREN", "T_SEMICOLON", "T_L_BRACE", "T_R_BRACE", 
      "T_ASSIGN", "T_COMMA", "T_ADD", "T_SUB", "T_MUL", "T_DIV", "T_MOD", 
      "T_AND", "T_OR", "T_NOT", "T_EQUAL", "T_NOT_EQUAL", "T_GREATER", "T_LESSER", 
      "T_GREATER_EQUAL", "T_LESSER_EQUAL", "T_RETURN", "T_INT", "T_VOID", 
      "T_IF", "T_ELSE", "T_WHILE", "T_BREAK", "T_CONTINUE", "T_ID", "T_DIGIT", 
      "T_OCT_DIGIT", "T_HEX_DIGIT", "WS", "LINE_COMMENT", "BLOCK_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,36,243,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,1,0,1,0,5,0,65,8,0,10,0,12,0,68,9,0,1,0,1,0,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,3,2,80,8,2,1,2,1,2,1,3,4,3,85,8,3,11,3,
  	12,3,86,1,4,1,4,1,4,1,4,3,4,93,8,4,1,5,1,5,1,5,1,5,5,5,99,8,5,10,5,12,
  	5,102,9,5,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,3,8,121,8,8,1,8,1,8,1,8,3,8,126,8,8,1,9,1,9,1,9,1,9,1,9,1,9,1,
  	9,3,9,135,8,9,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,
  	1,13,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,16,1,16,5,16,159,8,16,
  	10,16,12,16,162,9,16,1,17,1,17,1,17,5,17,167,8,17,10,17,12,17,170,9,17,
  	1,18,1,18,1,18,5,18,175,8,18,10,18,12,18,178,9,18,1,19,1,19,1,19,1,19,
  	5,19,184,8,19,10,19,12,19,187,9,19,1,20,1,20,1,20,1,20,5,20,193,8,20,
  	10,20,12,20,196,9,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,
  	1,25,3,25,209,8,25,1,26,1,26,1,27,1,27,1,27,1,27,3,27,217,8,27,1,27,1,
  	27,3,27,221,8,27,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,3,28,231,8,28,
  	1,29,1,29,1,29,5,29,236,8,29,10,29,12,29,239,9,29,1,30,1,30,1,30,0,0,
  	31,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,
  	48,50,52,54,56,58,60,0,5,1,0,8,9,1,0,10,12,1,0,16,21,1,0,13,14,2,0,9,
  	9,15,15,240,0,66,1,0,0,0,2,71,1,0,0,0,4,77,1,0,0,0,6,84,1,0,0,0,8,92,
  	1,0,0,0,10,94,1,0,0,0,12,105,1,0,0,0,14,107,1,0,0,0,16,125,1,0,0,0,18,
  	127,1,0,0,0,20,136,1,0,0,0,22,138,1,0,0,0,24,144,1,0,0,0,26,147,1,0,0,
  	0,28,150,1,0,0,0,30,152,1,0,0,0,32,154,1,0,0,0,34,163,1,0,0,0,36,171,
  	1,0,0,0,38,179,1,0,0,0,40,188,1,0,0,0,42,197,1,0,0,0,44,199,1,0,0,0,46,
  	201,1,0,0,0,48,203,1,0,0,0,50,205,1,0,0,0,52,210,1,0,0,0,54,220,1,0,0,
  	0,56,230,1,0,0,0,58,232,1,0,0,0,60,240,1,0,0,0,62,65,3,2,1,0,63,65,3,
  	10,5,0,64,62,1,0,0,0,64,63,1,0,0,0,65,68,1,0,0,0,66,64,1,0,0,0,66,67,
  	1,0,0,0,67,69,1,0,0,0,68,66,1,0,0,0,69,70,5,0,0,1,70,1,1,0,0,0,71,72,
  	5,23,0,0,72,73,5,30,0,0,73,74,5,1,0,0,74,75,5,2,0,0,75,76,3,4,2,0,76,
  	3,1,0,0,0,77,79,5,4,0,0,78,80,3,6,3,0,79,78,1,0,0,0,79,80,1,0,0,0,80,
  	81,1,0,0,0,81,82,5,5,0,0,82,5,1,0,0,0,83,85,3,8,4,0,84,83,1,0,0,0,85,
  	86,1,0,0,0,86,84,1,0,0,0,86,87,1,0,0,0,87,7,1,0,0,0,88,93,3,16,8,0,89,
  	93,3,10,5,0,90,93,3,24,12,0,91,93,3,26,13,0,92,88,1,0,0,0,92,89,1,0,0,
  	0,92,90,1,0,0,0,92,91,1,0,0,0,93,9,1,0,0,0,94,95,3,12,6,0,95,100,3,14,
  	7,0,96,97,5,7,0,0,97,99,3,14,7,0,98,96,1,0,0,0,99,102,1,0,0,0,100,98,
  	1,0,0,0,100,101,1,0,0,0,101,103,1,0,0,0,102,100,1,0,0,0,103,104,5,3,0,
  	0,104,11,1,0,0,0,105,106,5,23,0,0,106,13,1,0,0,0,107,108,5,30,0,0,108,
  	15,1,0,0,0,109,110,5,22,0,0,110,111,3,28,14,0,111,112,5,3,0,0,112,126,
  	1,0,0,0,113,114,3,60,30,0,114,115,5,6,0,0,115,116,3,28,14,0,116,117,5,
  	3,0,0,117,126,1,0,0,0,118,126,3,4,2,0,119,121,3,28,14,0,120,119,1,0,0,
  	0,120,121,1,0,0,0,121,122,1,0,0,0,122,126,5,3,0,0,123,126,3,18,9,0,124,
  	126,3,22,11,0,125,109,1,0,0,0,125,113,1,0,0,0,125,118,1,0,0,0,125,120,
  	1,0,0,0,125,123,1,0,0,0,125,124,1,0,0,0,126,17,1,0,0,0,127,128,5,25,0,
  	0,128,129,5,1,0,0,129,130,3,20,10,0,130,131,5,2,0,0,131,134,3,4,2,0,132,
  	133,5,26,0,0,133,135,3,4,2,0,134,132,1,0,0,0,134,135,1,0,0,0,135,19,1,
  	0,0,0,136,137,3,28,14,0,137,21,1,0,0,0,138,139,5,27,0,0,139,140,5,1,0,
  	0,140,141,3,20,10,0,141,142,5,2,0,0,142,143,3,4,2,0,143,23,1,0,0,0,144,
  	145,5,28,0,0,145,146,5,3,0,0,146,25,1,0,0,0,147,148,5,29,0,0,148,149,
  	5,3,0,0,149,27,1,0,0,0,150,151,3,34,17,0,151,29,1,0,0,0,152,153,3,38,
  	19,0,153,31,1,0,0,0,154,160,3,30,15,0,155,156,3,46,23,0,156,157,3,30,
  	15,0,157,159,1,0,0,0,158,155,1,0,0,0,159,162,1,0,0,0,160,158,1,0,0,0,
  	160,161,1,0,0,0,161,33,1,0,0,0,162,160,1,0,0,0,163,168,3,36,18,0,164,
  	165,5,14,0,0,165,167,3,36,18,0,166,164,1,0,0,0,167,170,1,0,0,0,168,166,
  	1,0,0,0,168,169,1,0,0,0,169,35,1,0,0,0,170,168,1,0,0,0,171,176,3,32,16,
  	0,172,173,5,13,0,0,173,175,3,32,16,0,174,172,1,0,0,0,175,178,1,0,0,0,
  	176,174,1,0,0,0,176,177,1,0,0,0,177,37,1,0,0,0,178,176,1,0,0,0,179,185,
  	3,40,20,0,180,181,3,42,21,0,181,182,3,40,20,0,182,184,1,0,0,0,183,180,
  	1,0,0,0,184,187,1,0,0,0,185,183,1,0,0,0,185,186,1,0,0,0,186,39,1,0,0,
  	0,187,185,1,0,0,0,188,194,3,54,27,0,189,190,3,44,22,0,190,191,3,54,27,
  	0,191,193,1,0,0,0,192,189,1,0,0,0,193,196,1,0,0,0,194,192,1,0,0,0,194,
  	195,1,0,0,0,195,41,1,0,0,0,196,194,1,0,0,0,197,198,7,0,0,0,198,43,1,0,
  	0,0,199,200,7,1,0,0,200,45,1,0,0,0,201,202,7,2,0,0,202,47,1,0,0,0,203,
  	204,7,3,0,0,204,49,1,0,0,0,205,208,3,52,26,0,206,209,3,56,28,0,207,209,
  	3,50,25,0,208,206,1,0,0,0,208,207,1,0,0,0,209,51,1,0,0,0,210,211,7,4,
  	0,0,211,53,1,0,0,0,212,221,3,56,28,0,213,214,5,30,0,0,214,216,5,1,0,0,
  	215,217,3,58,29,0,216,215,1,0,0,0,216,217,1,0,0,0,217,218,1,0,0,0,218,
  	221,5,2,0,0,219,221,3,50,25,0,220,212,1,0,0,0,220,213,1,0,0,0,220,219,
  	1,0,0,0,221,55,1,0,0,0,222,223,5,1,0,0,223,224,3,28,14,0,224,225,5,2,
  	0,0,225,231,1,0,0,0,226,231,5,31,0,0,227,231,5,32,0,0,228,231,5,33,0,
  	0,229,231,3,60,30,0,230,222,1,0,0,0,230,226,1,0,0,0,230,227,1,0,0,0,230,
  	228,1,0,0,0,230,229,1,0,0,0,231,57,1,0,0,0,232,237,3,28,14,0,233,234,
  	5,7,0,0,234,236,3,28,14,0,235,233,1,0,0,0,236,239,1,0,0,0,237,235,1,0,
  	0,0,237,238,1,0,0,0,238,59,1,0,0,0,239,237,1,0,0,0,240,241,5,30,0,0,241,
  	61,1,0,0,0,19,64,66,79,86,92,100,120,125,134,160,168,176,185,194,208,
  	216,220,230,237
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
    setState(66);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_INT) {
      setState(64);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(62);
        funcDef();
        break;
      }

      case 2: {
        setState(63);
        varDecl();
        break;
      }

      default:
        break;
      }
      setState(68);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(69);
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

tree::TerminalNode* MiniCParser::FuncDefContext::T_INT() {
  return getToken(MiniCParser::T_INT, 0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(MiniCParser::T_INT);
    setState(72);
    match(MiniCParser::T_ID);
    setState(73);
    match(MiniCParser::T_L_PAREN);
    setState(74);
    match(MiniCParser::T_R_PAREN);
    setState(75);
    block();
   
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
  enterRule(_localctx, 4, MiniCParser::RuleBlock);
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
    setState(77);
    match(MiniCParser::T_L_BRACE);
    setState(79);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17091822106) != 0)) {
      setState(78);
      blockItemList();
    }
    setState(81);
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
  enterRule(_localctx, 6, MiniCParser::RuleBlockItemList);
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
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(83);
      blockItem();
      setState(86); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17091822106) != 0));
   
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

MiniCParser::BreakStatementContext* MiniCParser::BlockItemContext::breakStatement() {
  return getRuleContext<MiniCParser::BreakStatementContext>(0);
}

MiniCParser::ContinueStatementContext* MiniCParser::BlockItemContext::continueStatement() {
  return getRuleContext<MiniCParser::ContinueStatementContext>(0);
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
  enterRule(_localctx, 8, MiniCParser::RuleBlockItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(92);
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
      case MiniCParser::T_ID:
      case MiniCParser::T_DIGIT:
      case MiniCParser::T_OCT_DIGIT:
      case MiniCParser::T_HEX_DIGIT: {
        enterOuterAlt(_localctx, 1);
        setState(88);
        statement();
        break;
      }

      case MiniCParser::T_INT: {
        enterOuterAlt(_localctx, 2);
        setState(89);
        varDecl();
        break;
      }

      case MiniCParser::T_BREAK: {
        enterOuterAlt(_localctx, 3);
        setState(90);
        breakStatement();
        break;
      }

      case MiniCParser::T_CONTINUE: {
        enterOuterAlt(_localctx, 4);
        setState(91);
        continueStatement();
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

std::vector<MiniCParser::VarDefContext *> MiniCParser::VarDeclContext::varDef() {
  return getRuleContexts<MiniCParser::VarDefContext>();
}

MiniCParser::VarDefContext* MiniCParser::VarDeclContext::varDef(size_t i) {
  return getRuleContext<MiniCParser::VarDefContext>(i);
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
  enterRule(_localctx, 10, MiniCParser::RuleVarDecl);
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
    setState(94);
    basicType();
    setState(95);
    varDef();
    setState(100);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_COMMA) {
      setState(96);
      match(MiniCParser::T_COMMA);
      setState(97);
      varDef();
      setState(102);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(103);
    match(MiniCParser::T_SEMICOLON);
   
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
  enterRule(_localctx, 12, MiniCParser::RuleBasicType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    match(MiniCParser::T_INT);
   
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
  enterRule(_localctx, 14, MiniCParser::RuleVarDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    match(MiniCParser::T_ID);
   
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
  enterRule(_localctx, 16, MiniCParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(125);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<MiniCParser::ReturnStatementContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(109);
      match(MiniCParser::T_RETURN);
      setState(110);
      expr();
      setState(111);
      match(MiniCParser::T_SEMICOLON);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<MiniCParser::AssignStatementContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(113);
      lVal();
      setState(114);
      match(MiniCParser::T_ASSIGN);
      setState(115);
      expr();
      setState(116);
      match(MiniCParser::T_SEMICOLON);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<MiniCParser::BlockStatementContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(118);
      block();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<MiniCParser::ExpressionStatementContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(120);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 16106160642) != 0)) {
        setState(119);
        expr();
      }
      setState(122);
      match(MiniCParser::T_SEMICOLON);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<MiniCParser::IfelseStatementContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(123);
      ifelseExpr();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<MiniCParser::WhileStatementContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(124);
      whileExpr();
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

std::vector<MiniCParser::BlockContext *> MiniCParser::IfelseExprContext::block() {
  return getRuleContexts<MiniCParser::BlockContext>();
}

MiniCParser::BlockContext* MiniCParser::IfelseExprContext::block(size_t i) {
  return getRuleContext<MiniCParser::BlockContext>(i);
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
  enterRule(_localctx, 18, MiniCParser::RuleIfelseExpr);
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
    setState(127);
    match(MiniCParser::T_IF);
    setState(128);
    match(MiniCParser::T_L_PAREN);
    setState(129);
    cond();
    setState(130);
    match(MiniCParser::T_R_PAREN);
    setState(131);
    block();
    setState(134);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MiniCParser::T_ELSE) {
      setState(132);
      match(MiniCParser::T_ELSE);
      setState(133);
      block();
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
  enterRule(_localctx, 20, MiniCParser::RuleCond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
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

MiniCParser::BlockContext* MiniCParser::WhileExprContext::block() {
  return getRuleContext<MiniCParser::BlockContext>(0);
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
  enterRule(_localctx, 22, MiniCParser::RuleWhileExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(MiniCParser::T_WHILE);
    setState(139);
    match(MiniCParser::T_L_PAREN);
    setState(140);
    cond();
    setState(141);
    match(MiniCParser::T_R_PAREN);
    setState(142);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

MiniCParser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::BreakStatementContext::T_BREAK() {
  return getToken(MiniCParser::T_BREAK, 0);
}

tree::TerminalNode* MiniCParser::BreakStatementContext::T_SEMICOLON() {
  return getToken(MiniCParser::T_SEMICOLON, 0);
}


size_t MiniCParser::BreakStatementContext::getRuleIndex() const {
  return MiniCParser::RuleBreakStatement;
}


std::any MiniCParser::BreakStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitBreakStatement(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::BreakStatementContext* MiniCParser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 24, MiniCParser::RuleBreakStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    match(MiniCParser::T_BREAK);
    setState(145);
    match(MiniCParser::T_SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStatementContext ------------------------------------------------------------------

MiniCParser::ContinueStatementContext::ContinueStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MiniCParser::ContinueStatementContext::T_CONTINUE() {
  return getToken(MiniCParser::T_CONTINUE, 0);
}

tree::TerminalNode* MiniCParser::ContinueStatementContext::T_SEMICOLON() {
  return getToken(MiniCParser::T_SEMICOLON, 0);
}


size_t MiniCParser::ContinueStatementContext::getRuleIndex() const {
  return MiniCParser::RuleContinueStatement;
}


std::any MiniCParser::ContinueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MiniCVisitor*>(visitor))
    return parserVisitor->visitContinueStatement(this);
  else
    return visitor->visitChildren(this);
}

MiniCParser::ContinueStatementContext* MiniCParser::continueStatement() {
  ContinueStatementContext *_localctx = _tracker.createInstance<ContinueStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, MiniCParser::RuleContinueStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    match(MiniCParser::T_CONTINUE);
    setState(148);
    match(MiniCParser::T_SEMICOLON);
   
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
  enterRule(_localctx, 28, MiniCParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
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
  enterRule(_localctx, 30, MiniCParser::RuleArithmeticExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
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
  enterRule(_localctx, 32, MiniCParser::RuleRelationalBinaryExp);
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
    setState(154);
    arithmeticExp();
    setState(160);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4128768) != 0)) {
      setState(155);
      relationalBinaryOp();
      setState(156);
      arithmeticExp();
      setState(162);
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
  enterRule(_localctx, 34, MiniCParser::RuleLogicBinaryExp);
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
    setState(163);
    logicAndExp();
    setState(168);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_OR) {
      setState(164);
      match(MiniCParser::T_OR);
      setState(165);
      logicAndExp();
      setState(170);
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
  enterRule(_localctx, 36, MiniCParser::RuleLogicAndExp);
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
    setState(171);
    relationalBinaryExp();
    setState(176);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_AND) {
      setState(172);
      match(MiniCParser::T_AND);
      setState(173);
      relationalBinaryExp();
      setState(178);
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
  enterRule(_localctx, 38, MiniCParser::RuleAddExp);
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
    setState(179);
    mulExp();
    setState(185);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_ADD

    || _la == MiniCParser::T_SUB) {
      setState(180);
      addOp();
      setState(181);
      mulExp();
      setState(187);
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
  enterRule(_localctx, 40, MiniCParser::RuleMulExp);
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
    setState(188);
    unaryExp();
    setState(194);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7168) != 0)) {
      setState(189);
      mulOp();
      setState(190);
      unaryExp();
      setState(196);
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
  enterRule(_localctx, 42, MiniCParser::RuleAddOp);
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
    setState(197);
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
  enterRule(_localctx, 44, MiniCParser::RuleMulOp);
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
    setState(199);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7168) != 0))) {
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
  enterRule(_localctx, 46, MiniCParser::RuleRelationalBinaryOp);
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
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4128768) != 0))) {
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
  enterRule(_localctx, 48, MiniCParser::RuleLogicBinaryOp);
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
    setState(203);
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

MiniCParser::PrimaryExpContext* MiniCParser::NormalUnaryExpContext::primaryExp() {
  return getRuleContext<MiniCParser::PrimaryExpContext>(0);
}

MiniCParser::NormalUnaryExpContext* MiniCParser::NormalUnaryExpContext::normalUnaryExp() {
  return getRuleContext<MiniCParser::NormalUnaryExpContext>(0);
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
  enterRule(_localctx, 50, MiniCParser::RuleNormalUnaryExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    unaryOp();
    setState(208);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MiniCParser::T_L_PAREN:
      case MiniCParser::T_ID:
      case MiniCParser::T_DIGIT:
      case MiniCParser::T_OCT_DIGIT:
      case MiniCParser::T_HEX_DIGIT: {
        setState(206);
        primaryExp();
        break;
      }

      case MiniCParser::T_SUB:
      case MiniCParser::T_NOT: {
        setState(207);
        normalUnaryExp();
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
  enterRule(_localctx, 52, MiniCParser::RuleUnaryOp);
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
    setState(210);
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
  enterRule(_localctx, 54, MiniCParser::RuleUnaryExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(220);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(212);
      primaryExp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(213);
      match(MiniCParser::T_ID);
      setState(214);
      match(MiniCParser::T_L_PAREN);
      setState(216);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 16106160642) != 0)) {
        setState(215);
        realParamList();
      }
      setState(218);
      match(MiniCParser::T_R_PAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(219);
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
  enterRule(_localctx, 56, MiniCParser::RulePrimaryExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(230);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MiniCParser::T_L_PAREN: {
        enterOuterAlt(_localctx, 1);
        setState(222);
        match(MiniCParser::T_L_PAREN);
        setState(223);
        expr();
        setState(224);
        match(MiniCParser::T_R_PAREN);
        break;
      }

      case MiniCParser::T_DIGIT: {
        enterOuterAlt(_localctx, 2);
        setState(226);
        match(MiniCParser::T_DIGIT);
        break;
      }

      case MiniCParser::T_OCT_DIGIT: {
        enterOuterAlt(_localctx, 3);
        setState(227);
        match(MiniCParser::T_OCT_DIGIT);
        break;
      }

      case MiniCParser::T_HEX_DIGIT: {
        enterOuterAlt(_localctx, 4);
        setState(228);
        match(MiniCParser::T_HEX_DIGIT);
        break;
      }

      case MiniCParser::T_ID: {
        enterOuterAlt(_localctx, 5);
        setState(229);
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
  enterRule(_localctx, 58, MiniCParser::RuleRealParamList);
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
    setState(232);
    expr();
    setState(237);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MiniCParser::T_COMMA) {
      setState(233);
      match(MiniCParser::T_COMMA);
      setState(234);
      expr();
      setState(239);
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
  enterRule(_localctx, 60, MiniCParser::RuleLVal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    match(MiniCParser::T_ID);
   
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
