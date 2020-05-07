module Styles = {
  open Css;

  let wrapper = style([display(block)]);

  let otherDiv =
    style([
      position(absolute),
      right(px(0)),
      top(px(0)),
      bottom(px(0)),
      width(pct(50.0)),
      height(pct(100.0)),
      zIndex(2),
      overflow(hidden),
      overflowY(auto),
      background(hex("fff")),
    ]);
};

[@react.component]
let make = () => {
  <div className=Styles.wrapper>
    <SmartphonePreview />
    <div className=Styles.otherDiv />
  </div>;
};
