[@bs.module]
external appStore: string = "../../../../static/assets/appstore.png";
[@bs.module]
external playStore: string = "../../../../static/assets/playstore.png";

module Styles = {
  open Css;

  let wrapper = style([paddingTop(px(100)), textAlign(`left)]);

  let h1 =
    style([
      fontFamily(`custom("Poppins")),
      fontSize(px(42)),
      fontWeight(`num(600)),
      color(hex("6603C9")),
      letterSpacing(px(-2)),
      lineHeight(em(1.2)),
      marginBottom(px(15)),
    ]);

  let h3 =
    style([
      fontFamily(`custom("Poppins")),
      fontSize(px(16)),
      fontWeight(`num(600)),
      textTransform(uppercase),
      color(hex("434343")),
      letterSpacing(px(0)),
      lineHeight(em(1.2)),
      marginTop(px(50)),
      marginBottom(px(30)),
    ]);

  let h4 =
    style([
      fontFamily(`custom("Poppins")),
      fontSize(px(14)),
      fontWeight(`num(600)),
      color(hex("A1A1A1")),
      letterSpacing(px(2)),
      textTransform(uppercase),
      marginBottom(px(20)),
    ]);

  let p =
    style([
      fontFamily(`custom("Poppins")),
      fontSize(px(16)),
      fontWeight(`num(400)),
      color(hex("A1A1A1")),
      letterSpacing(px(0)),
      lineHeight(em(1.5)),
      marginBottom(px(20)),
    ]);

  let a =
    style([
      display(inlineBlock),
      marginRight(px(15)),
      hover([opacity(0.8)]),
    ]);

  let img = style([width(px(150))]);
};

[@react.component]
let make = () => {
  <div className=Styles.wrapper>
    <h4 className=Styles.h4> {React.string("Messenger for anonymous")} </h4>
    <h1 className=Styles.h1>
      {React.string("Send voice and text message anonymously")}
    </h1>
    <p className=Styles.p>
      {React.string(
         "Aria is a messenger for people who prefer anonymity. Chat, call
              and hangout with friends anonymously. Aria is a tor for private
              conversations. None can catch thou.",
       )}
    </p>
    <h3 className=Styles.h3> {React.string("Download aria for free on")} </h3>
    <a href="#" className=Styles.a> <img src=appStore /> </a>
    <a href="#" className=Styles.a> <img src=playStore /> </a>
  </div>;
};
