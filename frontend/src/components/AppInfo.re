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
      media(
        "only screen and (max-width: 801px)",
        [position(relative), width(pct(100.0))],
      ),
      media(
        "only screen and (max-width: 420px)",
        [paddingLeft(px(20)), paddingRight(px(20))],
      ),
    ]);
};

[@react.component]
let make = () => {
  <section className=Styles.wrapper>
    <MainLogo />
    <IntroApp />
    <InfoFooter />
  </section>;
};
