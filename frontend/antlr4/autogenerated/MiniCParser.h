
// Generated from MiniC.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  MiniCParser : public antlr4::Parser {
public:
  enum {
    T_L_PAREN = 1, T_R_PAREN = 2, T_SEMICOLON = 3, T_L_BRACE = 4, T_R_BRACE = 5, 
    T_L_SQUARE_BRACKTE = 6, T_R_SQUARE_BRACKTE = 7, T_ASSIGN = 8, T_COMMA = 9, 
    T_ADD = 10, T_SUB = 11, T_MUL = 12, T_DIV = 13, T_MOD = 14, T_AND = 15, 
    T_OR = 16, T_NOT = 17, T_EQUAL = 18, T_NOT_EQUAL = 19, T_GREATER = 20, 
    T_LESSER = 21, T_GREATER_EQUAL = 22, T_LESSER_EQUAL = 23, T_RETURN = 24, 
    T_INT = 25, T_VOID = 26, T_IF = 27, T_ELSE = 28, T_WHILE = 29, T_BREAK = 30, 
    T_CONTINUE = 31, T_ID = 32, T_DIGIT = 33, T_OCT_DIGIT = 34, T_HEX_DIGIT = 35, 
    WS = 36, LINE_COMMENT = 37, BLOCK_COMMENT = 38
  };

  enum {
    RuleCompileUnit = 0, RuleFuncDef = 1, RuleFormalParamList = 2, RuleFormalParam = 3, 
    RuleBlock = 4, RuleBlockItemList = 5, RuleBlockItem = 6, RuleVarDecl = 7, 
    RuleVarAndInit = 8, RuleBasicType = 9, RuleVarDef = 10, RuleArrDef = 11, 
    RuleStatement = 12, RuleIfelseExpr = 13, RuleCond = 14, RuleWhileExpr = 15, 
    RuleExpr = 16, RuleArithmeticExp = 17, RuleRelationalBinaryExp = 18, 
    RuleLogicBinaryExp = 19, RuleLogicAndExp = 20, RuleAddExp = 21, RuleMulExp = 22, 
    RuleAddOp = 23, RuleMulOp = 24, RuleRelationalBinaryOp = 25, RuleLogicBinaryOp = 26, 
    RuleNormalUnaryExp = 27, RuleUnaryOp = 28, RuleUnaryExp = 29, RulePrimaryExp = 30, 
    RuleRealParamList = 31, RuleLVal = 32
  };

  explicit MiniCParser(antlr4::TokenStream *input);

  MiniCParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~MiniCParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class CompileUnitContext;
  class FuncDefContext;
  class FormalParamListContext;
  class FormalParamContext;
  class BlockContext;
  class BlockItemListContext;
  class BlockItemContext;
  class VarDeclContext;
  class VarAndInitContext;
  class BasicTypeContext;
  class VarDefContext;
  class ArrDefContext;
  class StatementContext;
  class IfelseExprContext;
  class CondContext;
  class WhileExprContext;
  class ExprContext;
  class ArithmeticExpContext;
  class RelationalBinaryExpContext;
  class LogicBinaryExpContext;
  class LogicAndExpContext;
  class AddExpContext;
  class MulExpContext;
  class AddOpContext;
  class MulOpContext;
  class RelationalBinaryOpContext;
  class LogicBinaryOpContext;
  class NormalUnaryExpContext;
  class UnaryOpContext;
  class UnaryExpContext;
  class PrimaryExpContext;
  class RealParamListContext;
  class LValContext; 

  class  CompileUnitContext : public antlr4::ParserRuleContext {
  public:
    CompileUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<FuncDefContext *> funcDef();
    FuncDefContext* funcDef(size_t i);
    std::vector<VarDeclContext *> varDecl();
    VarDeclContext* varDecl(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompileUnitContext* compileUnit();

  class  FuncDefContext : public antlr4::ParserRuleContext {
  public:
    FuncDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasicTypeContext *basicType();
    antlr4::tree::TerminalNode *T_ID();
    antlr4::tree::TerminalNode *T_L_PAREN();
    antlr4::tree::TerminalNode *T_R_PAREN();
    BlockContext *block();
    FormalParamListContext *formalParamList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncDefContext* funcDef();

  class  FormalParamListContext : public antlr4::ParserRuleContext {
  public:
    FormalParamListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FormalParamContext *> formalParam();
    FormalParamContext* formalParam(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FormalParamListContext* formalParamList();

  class  FormalParamContext : public antlr4::ParserRuleContext {
  public:
    FormalParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasicTypeContext *basicType();
    VarDefContext *varDef();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FormalParamContext* formalParam();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_L_BRACE();
    antlr4::tree::TerminalNode *T_R_BRACE();
    BlockItemListContext *blockItemList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  BlockItemListContext : public antlr4::ParserRuleContext {
  public:
    BlockItemListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BlockItemContext *> blockItem();
    BlockItemContext* blockItem(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockItemListContext* blockItemList();

  class  BlockItemContext : public antlr4::ParserRuleContext {
  public:
    BlockItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    VarDeclContext *varDecl();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockItemContext* blockItem();

  class  VarDeclContext : public antlr4::ParserRuleContext {
  public:
    VarDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasicTypeContext *basicType();
    std::vector<VarAndInitContext *> varAndInit();
    VarAndInitContext* varAndInit(size_t i);
    antlr4::tree::TerminalNode *T_SEMICOLON();
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclContext* varDecl();

  class  VarAndInitContext : public antlr4::ParserRuleContext {
  public:
    VarAndInitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarDefContext *varDef();
    antlr4::tree::TerminalNode *T_ASSIGN();
    ExprContext *expr();
    ArrDefContext *arrDef();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarAndInitContext* varAndInit();

  class  BasicTypeContext : public antlr4::ParserRuleContext {
  public:
    BasicTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_INT();
    antlr4::tree::TerminalNode *T_VOID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasicTypeContext* basicType();

  class  VarDefContext : public antlr4::ParserRuleContext {
  public:
    VarDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDefContext* varDef();

  class  ArrDefContext : public antlr4::ParserRuleContext {
  public:
    ArrDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ID();
    std::vector<antlr4::tree::TerminalNode *> T_L_SQUARE_BRACKTE();
    antlr4::tree::TerminalNode* T_L_SQUARE_BRACKTE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_DIGIT();
    antlr4::tree::TerminalNode* T_DIGIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_R_SQUARE_BRACKTE();
    antlr4::tree::TerminalNode* T_R_SQUARE_BRACKTE(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrDefContext* arrDef();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WhileStatementContext : public StatementContext {
  public:
    WhileStatementContext(StatementContext *ctx);

    WhileExprContext *whileExpr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BlockStatementContext : public StatementContext {
  public:
    BlockStatementContext(StatementContext *ctx);

    BlockContext *block();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfelseStatementContext : public StatementContext {
  public:
    IfelseStatementContext(StatementContext *ctx);

    IfelseExprContext *ifelseExpr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignStatementContext : public StatementContext {
  public:
    AssignStatementContext(StatementContext *ctx);

    LValContext *lVal();
    antlr4::tree::TerminalNode *T_ASSIGN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_SEMICOLON();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BreakStatementContext : public StatementContext {
  public:
    BreakStatementContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *T_BREAK();
    antlr4::tree::TerminalNode *T_SEMICOLON();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExpressionStatementContext : public StatementContext {
  public:
    ExpressionStatementContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *T_SEMICOLON();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ContinueStatementContext : public StatementContext {
  public:
    ContinueStatementContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *T_CONTINUE();
    antlr4::tree::TerminalNode *T_SEMICOLON();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ReturnStatementContext : public StatementContext {
  public:
    ReturnStatementContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *T_RETURN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_SEMICOLON();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  IfelseExprContext : public antlr4::ParserRuleContext {
  public:
    IfelseExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_IF();
    antlr4::tree::TerminalNode *T_L_PAREN();
    CondContext *cond();
    antlr4::tree::TerminalNode *T_R_PAREN();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *T_ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfelseExprContext* ifelseExpr();

  class  CondContext : public antlr4::ParserRuleContext {
  public:
    CondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CondContext* cond();

  class  WhileExprContext : public antlr4::ParserRuleContext {
  public:
    WhileExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_WHILE();
    antlr4::tree::TerminalNode *T_L_PAREN();
    CondContext *cond();
    antlr4::tree::TerminalNode *T_R_PAREN();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileExprContext* whileExpr();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicBinaryExpContext *logicBinaryExp();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  ArithmeticExpContext : public antlr4::ParserRuleContext {
  public:
    ArithmeticExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddExpContext *addExp();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArithmeticExpContext* arithmeticExp();

  class  RelationalBinaryExpContext : public antlr4::ParserRuleContext {
  public:
    RelationalBinaryExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArithmeticExpContext *> arithmeticExp();
    ArithmeticExpContext* arithmeticExp(size_t i);
    std::vector<RelationalBinaryOpContext *> relationalBinaryOp();
    RelationalBinaryOpContext* relationalBinaryOp(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationalBinaryExpContext* relationalBinaryExp();

  class  LogicBinaryExpContext : public antlr4::ParserRuleContext {
  public:
    LogicBinaryExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LogicAndExpContext *> logicAndExp();
    LogicAndExpContext* logicAndExp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_OR();
    antlr4::tree::TerminalNode* T_OR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicBinaryExpContext* logicBinaryExp();

  class  LogicAndExpContext : public antlr4::ParserRuleContext {
  public:
    LogicAndExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RelationalBinaryExpContext *> relationalBinaryExp();
    RelationalBinaryExpContext* relationalBinaryExp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_AND();
    antlr4::tree::TerminalNode* T_AND(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicAndExpContext* logicAndExp();

  class  AddExpContext : public antlr4::ParserRuleContext {
  public:
    AddExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MulExpContext *> mulExp();
    MulExpContext* mulExp(size_t i);
    std::vector<AddOpContext *> addOp();
    AddOpContext* addOp(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddExpContext* addExp();

  class  MulExpContext : public antlr4::ParserRuleContext {
  public:
    MulExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UnaryExpContext *> unaryExp();
    UnaryExpContext* unaryExp(size_t i);
    std::vector<MulOpContext *> mulOp();
    MulOpContext* mulOp(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MulExpContext* mulExp();

  class  AddOpContext : public antlr4::ParserRuleContext {
  public:
    AddOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ADD();
    antlr4::tree::TerminalNode *T_SUB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddOpContext* addOp();

  class  MulOpContext : public antlr4::ParserRuleContext {
  public:
    MulOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_MUL();
    antlr4::tree::TerminalNode *T_DIV();
    antlr4::tree::TerminalNode *T_MOD();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MulOpContext* mulOp();

  class  RelationalBinaryOpContext : public antlr4::ParserRuleContext {
  public:
    RelationalBinaryOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_EQUAL();
    antlr4::tree::TerminalNode *T_NOT_EQUAL();
    antlr4::tree::TerminalNode *T_GREATER();
    antlr4::tree::TerminalNode *T_LESSER();
    antlr4::tree::TerminalNode *T_GREATER_EQUAL();
    antlr4::tree::TerminalNode *T_LESSER_EQUAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationalBinaryOpContext* relationalBinaryOp();

  class  LogicBinaryOpContext : public antlr4::ParserRuleContext {
  public:
    LogicBinaryOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_AND();
    antlr4::tree::TerminalNode *T_OR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicBinaryOpContext* logicBinaryOp();

  class  NormalUnaryExpContext : public antlr4::ParserRuleContext {
  public:
    NormalUnaryExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryOpContext *unaryOp();
    UnaryExpContext *unaryExp();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NormalUnaryExpContext* normalUnaryExp();

  class  UnaryOpContext : public antlr4::ParserRuleContext {
  public:
    UnaryOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_SUB();
    antlr4::tree::TerminalNode *T_NOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryOpContext* unaryOp();

  class  UnaryExpContext : public antlr4::ParserRuleContext {
  public:
    UnaryExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArrDefContext *arrDef();
    PrimaryExpContext *primaryExp();
    antlr4::tree::TerminalNode *T_ID();
    antlr4::tree::TerminalNode *T_L_PAREN();
    antlr4::tree::TerminalNode *T_R_PAREN();
    RealParamListContext *realParamList();
    NormalUnaryExpContext *normalUnaryExp();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExpContext* unaryExp();

  class  PrimaryExpContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_L_PAREN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *T_R_PAREN();
    antlr4::tree::TerminalNode *T_DIGIT();
    antlr4::tree::TerminalNode *T_OCT_DIGIT();
    antlr4::tree::TerminalNode *T_HEX_DIGIT();
    LValContext *lVal();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryExpContext* primaryExp();

  class  RealParamListContext : public antlr4::ParserRuleContext {
  public:
    RealParamListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> T_COMMA();
    antlr4::tree::TerminalNode* T_COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RealParamListContext* realParamList();

  class  LValContext : public antlr4::ParserRuleContext {
  public:
    LValContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T_ID();
    ArrDefContext *arrDef();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LValContext* lVal();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

