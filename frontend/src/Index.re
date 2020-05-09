Css.(
  global(
    "*",
    [
      margin(px(0)),
      padding(px(0)),
      boxSizing(borderBox),
      verticalAlign(baseline),
    ],
  )
);

Css.(global("html *"), [unsafe("-webkit-font-smoothing", "antialiased")]);

ReactDOMRe.renderToElementWithId(<App />, "root");
