[@bs.module] external src: string = "../../../../static/assets/app_icon.png";

module Styles = {
  open Css;

  let wrapper =
    style([
      position(absolute),
      right(px(0)),
      top(px(0)),
      bottom(px(0)),
      width(pct(50.0)),
      height(pct(100.0)),
      paddingLeft(px(50)),
      paddingRight(px(50)),
      zIndex(2),
      overflow(hidden),
      overflowY(auto),
      background(hex("fff")),
    ]);

  let mainLogo = style([paddingTop(px(50))]);

  let appIcon = style([width(px(50)), height(px(50))]);

  let introApp = style([paddingTop(px(100)), textAlign(`left)]);

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
};

[@react.component]
let make = () => {
  <section className=Styles.wrapper>
    <div className=Styles.mainLogo> <img src className=Styles.appIcon /> </div>
    <div className=Styles.introApp>
      <div>
        <h4 className=Styles.h4>
          {React.string("Messenger for anonymous")}
        </h4>
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
        <h3 className=Styles.h3>
          {React.string("Download aria for free on")}
        </h3>
      </div>
    </div>
  </section>;
};
